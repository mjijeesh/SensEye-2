//**************************************************************************************************
// glassescapwebsock.c
//
// Russ Bielawski
// 2013-03-06: created to grab data from insight-serv
// 2013-06-26: I've been adding contortions to get 2 and 3 cameras supported
//**************************************************************************************************


//**************************************************************************************************
// includes
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <assert.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include "senseye_defs.h"

// Mask files
#include "stonymask_nomask.h"
#include "mask_5v_breadboard.h"
#include "mask_left.h"
#include "mask_right.h"
//const char* MASK_ARRAY[NUM_CAMS] = {mask_right, mask_5v_breadboard};
const char* MASK_ARRAY[NUM_CAMS] = {stonymask_nomask, stonymask_nomask};


//**************************************************************************************************
// defines / constants
//
#define DEBUG_VERBOSE         (0)
#define MAX_CAMS              (2)
#define FRAME_X_Y             (112)
#define FRAME_LEN             (FRAME_X_Y*FRAME_X_Y)
#define KEY_QUIT              ('q')

#define INSIGHT_SERV_ADDR     ("141.212.11.131")
#define INSIGHT_SERV_PORT     (80)

#define dbgPrintOp(msg,opcode) do { \
                                  if(0!=gFlagDbgOutputOn) \
                                  { \
                                     fprintf(stderr,msg,opcode); \
                                  } \
                               } while(0)

//const char REQUEST[] = {SYMBOL_SOF,OPCODE_SINGLE_FRAME};
const char REQUEST[] = "GET\r\n";


//**************************************************************************************************
// globals
//
int g_sd_insight;
unsigned gFlagUserCliValid;
unsigned gFlagUserCliHelp;
unsigned gFlagDbgOutputOn;


//**************************************************************************************************
// local function prototypes
//

static void get_frame (int sd, uint8_t* recv_buf, uint16_t frame_size, uint8_t** frame_buf, uint8_t cam_id);
static void terminate(int signum);


//**************************************************************************************************
// main
//
int main(int argc, char** argv)
{
   int i, j;
   //char cc;
   unsigned numcams;

   int ret;
   int send_len_ret;
   uint8_t recv_buf[256*1024];    // huge because I am a lazy man
   uint8_t* frame_buf [NUM_CAMS];

   struct sockaddr_in sockaddr_server;

   int sd;

   // TODO hardcoded for now
   numcams=2;

   // print numcams on stdout for pipe interface
   printf("%c",SYMBOL_SOF);
   printf("%c",OPCODE_NUM_CAMS);
   printf("%c",(unsigned char)numcams);
   fflush(stdout);

   g_sd_insight = -1;

   // we want to gracefully close the remove connection
   signal(SIGHUP, terminate);
   signal(SIGINT, terminate);
   signal(SIGABRT, terminate);
   signal(SIGQUIT, terminate);
   signal(SIGTERM, terminate);
   // broken pipe
   signal(SIGPIPE, terminate);

   // setup connection to server
   sd = socket(AF_INET, SOCK_STREAM, 0);
   if (sd < 0) {
      perror("Could not open socket");
      terminate(0);
   }

   memset(&sockaddr_server, 0, sizeof(sockaddr_server));
   sockaddr_server.sin_family = AF_INET;
   sockaddr_server.sin_port = htons(INSIGHT_SERV_PORT);
   inet_aton(INSIGHT_SERV_ADDR, &sockaddr_server.sin_addr);

   ret = connect(sd, (struct sockaddr*)(&sockaddr_server), sizeof(sockaddr_server));
   if (ret < 0) {
      perror("Could not connect");
      terminate(0);
   }

   // send a simple GET request to the server
   send_len_ret = send(sd, (const void*)(&REQUEST), sizeof(REQUEST), 0);
   if (send_len_ret != sizeof(REQUEST)) {
      perror("Could not sent GET request");
      terminate(0);
   }

   // malloc space for the frames
   for (i=0; i<NUM_CAMS; i++) {
      frame_buf[i] = (uint8_t*)malloc(MAX_FRAME_SIZE*sizeof(uint8_t));
      if (frame_buf[i] == NULL) {
         perror("Malloc of frame buffer failed");
         exit(1);
      }
      memset(frame_buf[i], 0x00, MAX_FRAME_SIZE);
   }

   uint8_t  cam_id = 0;
   uint8_t  opcode = 0;
   uint16_t frame_size = 0;

   while (1) {
      // Get header
      int recv_len_total = 0;
      while (recv_len_total < HEADER_SIZE) {
         int recv_len = recv(sd, (void*)(&(recv_buf[recv_len_total])), HEADER_SIZE-recv_len_total, 0);
         if (recv_len < 0) {
            if (errno != EAGAIN) {
               perror("Failed to receive header");
               terminate(0);
            }
         } else {
            recv_len_total += recv_len;
         }
      }

      // Repeat until we have found a valid header
      if (recv_buf[SYMBOL_INDEX] != SYMBOL_SOF) {
         fprintf(stderr, "Invalid header\n");
         continue;
      }

      // Parse out cam_id and opcode
      cam_id = ((recv_buf[OPCODE_INDEX] >> 4) & 0x0F);
      opcode = ((recv_buf[OPCODE_INDEX] >> 0) & 0x0F);
      if (cam_id > NUM_CAMS || opcode > MAX_OPCODE) {
         // header is invalid
         fprintf(stderr, "Invalid header values\n");
         continue;
      }

      // Get frame size
      frame_size = (((recv_buf[SIZE_MSB_INDEX] << 8) & 0xFF00) |
                    ((recv_buf[SIZE_LSB_INDEX] << 0) & 0x00FF));

      switch (opcode) {
         case OPCODE_FRAME:
            get_frame(sd, recv_buf, frame_size, frame_buf, cam_id);
            break;
         case OPCODE_MASK:
            //TODO: MASKSssssss
            break;
         case OPCODE_EXIT:
            fprintf(stderr, "Received exit command\n");
            //TODO: alert display we are finished???
            exit(1);
            break;
         default:
            // Invalid opcode
            fprintf(stderr, "Invalid opcode value\n");
            continue;
            break;
      }

      // Send new frames to display
      printf("%c", SYMBOL_SOF);
      printf("%c", OPCODE_FRAME);
      for (i=0; i<NUM_CAMS; i++) {
         for (j=0; j<MAX_FRAME_SIZE; j++) {
            printf("%c", (unsigned char)frame_buf[i][j]);
         }
      }
   }
}

static void get_frame (int sd, uint8_t* recv_buf, uint16_t frame_size, uint8_t** frame_buf, uint8_t cam_id) {
   int i;
   int recv_len_total = 0;

   // Receive a frame from the socket
   while (recv_len_total < frame_size) {
      int recv_len = recv(sd, (void*)(&(recv_buf[recv_len_total])), frame_size-recv_len_total, 0);
      if (recv_len < 0) {
         if (errno != EAGAIN) {
            perror("Failed to receive frame");
            terminate(0);
         }
      } else {
         recv_len_total += recv_len;
      }
   }
   //fprintf(stderr,"(rx'd %d bytes)\n", recv_len_total);

   //TODO: rewrite this to incorporate frame mask
   // Remove pixel mask
   for (i=0; i<frame_size; i++) {
      uint8_t mask_val = MASK_ARRAY[cam_id][i];
      if (recv_buf[i] < mask_val) {
         frame_buf[cam_id][i] = 0;
      } else {
         frame_buf[cam_id][i] = recv_buf[i] - mask_val;
      }
   }

   // Copy data into appropriate frame
   //memcpy(frame_buf[cam_id], recv_buf, frame_size);
}

// terminate: signal handler to cleanup the camera connection and exit
static void terminate(int xx) {

   // Close display
   printf("%c",SYMBOL_SOF);
   printf("%c",OPCODE_EXIT);

   exit(1);
}
