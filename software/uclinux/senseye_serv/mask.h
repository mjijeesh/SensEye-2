const char stonymask[112*112]={79,67,101,79,79,96,79,67,75,79,67,67,97,79,79,67,75,67,75,79,75,67,67,67,96,96,75,67,79,67,67,79,101,101,75,108,75,71,79,96,101,101,101,101,101,67,96,79,79,67,67,101,75,75,75,67,97,97,79,96,67,79,97,100,75,79,101,96,100,101,75,79,67,79,71,79,101,75,75,67,101,96,71,67,75,67,75,79,97,71,67,67,101,100,79,75,67,67,75,75,67,100,96,79,67,79,67,79,65,96,96,96,67,67,47,44,40,67,33,67,67,67,67,41,67,67,65,67,44,67,67,40,67,67,67,67,47,45,65,64,64,67,33,67,79,67,67,45,47,41,67,65,40,65,44,79,64,71,45,67,65,44,64,67,65,47,44,65,75,65,47,67,45,67,45,67,40,45,41,45,67,67,40,45,40,41,45,67,75,44,44,40,47,45,44,44,67,45,67,67,67,40,33,45,67,65,15,40,40,67,67,44,40,45,32,40,40,45,67,67,40,67,67,67,67,75,67,67,67,64,65,75,67,45,67,67,67,67,65,67,65,67,67,67,40,40,67,67,65,67,67,67,67,67,67,65,67,67,65,71,67,67,67,75,67,96,67,67,67,96,67,109,67,45,67,67,79,67,67,67,75,45,47,67,67,75,75,75,65,64,67,65,45,75,67,67,44,47,45,75,71,67,65,67,67,75,65,67,67,67,45,67,67,67,40,40,40,40,64,67,40,67,67,67,67,67,40,44,45,65,67,65,67,79,67,71,67,75,47,67,67,67,45,67,67,67,67,45,40,67,67,65,67,67,67,75,67,67,67,75,67,65,67,71,67,67,75,67,96,79,75,75,45,40,67,97,67,67,75,75,65,67,67,79,101,65,64,67,96,75,75,75,67,71,67,75,67,67,79,96,67,67,75,79,75,75,79,67,67,75,67,75,97,67,67,67,75,45,45,65,67,67,67,67,75,67,40,40,67,41,67,65,65,75,67,64,67,67,65,47,45,67,67,45,67,67,75,67,67,67,67,67,67,67,67,67,75,67,67,67,67,67,67,67,45,67,47,44,75,67,67,75,65,67,67,44,71,67,67,67,65,65,75,75,67,44,67,71,75,100,67,75,67,75,67,75,67,67,67,67,67,96,67,64,75,67,67,45,44,67,67,75,67,67,67,67,67,67,67,67,45,64,67,67,96,65,67,45,67,67,67,67,44,47,40,67,67,45,45,67,45,44,65,67,67,67,67,45,45,67,65,67,75,67,75,65,65,75,67,67,67,67,47,65,67,65,67,67,67,40,45,65,67,67,67,47,45,64,65,45,67,67,67,67,67,67,65,40,67,67,67,45,64,64,75,75,65,45,44,67,47,67,65,79,67,67,97,75,67,33,65,67,67,67,65,67,67,65,45,45,45,67,40,67,67,45,47,65,67,96,45,67,67,47,40,67,67,67,47,45,65,75,65,40,44,33,65,65,67,15,33,44,41,40,33,33,33,40,64,15,40,64,44,67,33,40,67,44,45,40,65,67,67,67,67,75,75,67,67,67,67,65,67,65,67,65,65,33,40,47,67,65,75,79,67,67,67,67,67,45,47,67,45,65,67,67,67,75,67,65,67,75,67,45,40,67,67,67,67,79,75,65,67,45,41,67,67,40,40,45,65,47,44,79,67,65,67,67,65,67,64,45,40,65,65,67,45,67,67,75,65,64,67,67,67,67,65,67,47,65,67,65,67,67,65,67,67,65,64,45,67,65,47,67,67,44,33,40,67,40,33,65,40,67,65,67,67,67,96,67,75,67,67,65,67,45,75,67,67,67,67,45,65,67,67,44,75,67,65,67,45,40,65,67,96,67,67,67,67,67,67,67,67,67,75,75,67,79,71,71,67,75,96,67,67,67,79,97,47,45,67,65,67,75,67,96,67,64,65,67,67,65,65,45,45,45,67,75,67,67,45,45,67,65,67,67,67,65,67,67,67,67,67,45,45,65,67,67,67,47,44,67,75,100,67,75,67,67,47,44,67,45,64,67,67,67,67,67,67,67,65,65,75,75,67,67,67,79,79,79,67,67,67,71,65,67,67,67,75,67,67,67,75,65,75,67,67,96,79,75,67,75,67,64,71,67,67,75,67,79,67,67,67,101,75,45,65,67,75,79,65,67,67,67,67,67,32,67,67,67,45,65,67,67,47,67,67,67,65,75,65,65,67,45,67,67,67,67,67,67,33,45,40,44,67,67,67,67,67,65,67,64,45,40,65,67,44,67,67,67,65,67,75,44,45,67,65,75,67,79,67,65,65,67,67,67,65,67,44,64,67,67,45,67,44,45,65,67,65,40,45,67,75,67,67,47,45,67,67,79,47,67,67,67,67,75,67,65,67,67,44,65,65,67,40,67,67,67,65,47,40,45,65,65,65,67,67,65,40,67,71,65,40,40,67,44,45,67,65,65,64,67,44,67,67,67,65,15,64,67,40,67,44,65,65,65,67,67,45,44,67,45,40,47,67,45,45,45,44,75,45,45,40,40,67,44,67,47,65,67,45,67,67,67,67,67,65,67,67,65,40,40,67,67,67,67,65,65,67,67,65,67,67,75,67,65,67,65,67,65,67,75,75,67,67,75,67,67,67,67,67,96,96,67,67,75,71,75,67,65,44,67,75,67,67,45,47,67,67,45,67,71,65,67,45,64,65,67,67,45,47,40,44,45,65,67,67,67,65,47,45,41,40,40,44,40,40,65,67,40,65,67,67,67,44,47,65,67,67,45,47,75,67,67,45,40,65,47,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,67,44,44,40,65,79,79,75,67,67,67,47,67,45,67,67,67,67,67,75,97,67,45,65,65,67,79,65,75,67,67,96,79,75,67,67,67,67,65,67,45,67,65,67,67,40,75,67,67,65,67,67,65,67,45,67,67,45,75,40,75,96,67,67,67,67,40,64,67,71,67,67,45,67,65,67,65,65,65,40,40,45,67,67,64,40,67,67,67,67,67,75,65,45,64,67,67,65,67,71,67,67,75,67,67,67,67,45,47,67,67,67,67,33,45,47,67,67,67,67,79,75,45,67,47,67,45,65,67,65,45,67,75,67,71,67,96,44,75,75,79,47,67,45,67,67,65,65,67,79,75,67,67,67,67,67,67,67,67,67,75,67,67,67,65,64,67,101,67,65,67,65,40,67,64,65,65,45,67,67,96,67,65,67,67,67,65,65,44,67,67,75,67,65,67,67,67,65,67,67,45,65,40,47,47,45,67,75,67,75,45,47,67,67,67,67,44,67,67,65,67,100,75,65,44,45,40,44,47,67,67,65,67,67,67,33,40,45,67,67,67,40,45,67,101,67,67,67,67,96,65,65,67,75,96,67,67,67,65,45,47,47,67,67,47,67,45,65,67,65,64,65,45,40,40,45,65,45,64,41,40,45,67,65,67,45,45,45,45,47,67,71,65,44,40,44,67,67,47,67,47,65,40,44,45,44,65,40,40,45,67,40,67,44,47,67,65,45,67,65,67,67,44,45,64,67,67,67,67,45,65,67,40,65,67,97,67,67,45,67,67,67,65,67,79,67,67,67,64,40,67,65,71,67,67,67,67,67,67,67,75,67,67,67,45,33,67,75,45,67,44,67,65,64,67,67,67,67,67,67,45,45,67,45,65,67,67,67,67,44,67,45,67,64,67,45,65,75,64,40,45,65,67,40,65,14,40,45,45,45,65,67,40,45,65,67,65,45,67,67,40,45,67,45,67,67,67,65,67,67,44,64,67,64,45,67,71,75,67,75,67,65,67,45,44,45,67,67,67,65,67,67,67,65,67,67,79,75,67,65,45,67,67,67,65,67,65,67,75,67,65,67,67,75,71,67,67,67,45,45,75,47,44,45,67,75,65,45,67,75,67,65,67,45,67,67,67,67,67,67,67,65,67,65,65,65,65,45,67,71,65,47,67,67,75,65,47,65,65,44,67,67,67,67,65,65,65,40,40,45,67,65,45,40,67,67,67,67,67,75,67,45,67,47,67,67,67,67,71,67,75,67,67,47,67,65,65,75,75,64,47,44,67,67,64,67,67,67,67,97,96,45,65,67,67,75,67,67,67,67,75,67,67,75,79,67,67,75,75,65,67,67,71,67,47,64,67,75,71,45,45,67,67,65,67,40,67,75,67,67,75,65,40,44,67,67,67,45,67,45,67,67,67,67,67,65,45,45,67,67,67,67,75,67,67,67,67,67,65,47,40,47,67,65,44,44,65,45,45,67,40,67,67,45,41,67,67,79,67,64,65,65,67,75,67,67,67,40,40,40,67,67,40,45,67,67,67,67,67,67,67,67,47,45,47,47,67,67,75,67,67,67,75,47,65,75,67,67,75,67,75,45,47,67,96,67,40,67,67,67,64,44,40,67,75,67,67,67,67,65,67,44,44,75,44,64,67,65,67,67,67,65,67,67,65,47,40,45,75,75,71,67,47,67,67,67,67,45,67,45,40,40,40,44,40,44,45,40,67,45,45,65,33,67,65,45,45,65,67,65,67,75,45,64,67,67,44,33,40,45,47,67,67,75,67,67,67,64,32,65,75,71,67,67,65,40,47,67,65,47,44,67,65,67,67,65,45,67,75,67,67,67,45,44,67,45,101,67,67,65,67,67,75,67,65,32,44,67,75,67,67,67,67,67,41,67,67,65,67,67,67,65,47,44,67,75,67,40,47,67,67,47,45,45,45,45,67,67,67,47,45,40,40,65,45,44,65,65,40,40,67,64,67,65,44,65,45,45,67,67,67,67,67,71,75,67,67,79,75,40,67,67,45,67,75,71,67,45,67,40,65,67,67,65,75,67,67,67,67,67,67,45,67,67,64,65,67,65,64,75,67,79,67,67,79,67,79,67,101,67,67,65,47,67,45,65,67,67,67,67,75,64,67,75,75,40,47,67,44,45,67,40,67,67,75,67,67,67,65,67,65,67,75,65,67,67,67,65,67,75,67,67,65,67,65,47,45,65,67,67,47,44,67,67,47,67,44,65,45,67,67,65,79,97,79,96,75,45,67,79,67,65,47,65,67,67,67,67,67,67,67,40,45,67,67,67,67,71,75,67,75,79,75,67,67,67,67,67,71,67,67,67,67,67,75,75,79,67,75,65,96,96,67,67,40,67,75,67,67,71,67,71,75,67,96,67,67,67,45,65,67,67,67,64,67,65,67,32,67,75,67,44,45,67,75,67,75,64,44,67,75,79,45,40,65,67,40,32,40,45,45,67,65,45,67,45,67,75,67,67,75,40,41,67,79,65,67,65,67,67,67,67,67,65,67,45,44,67,75,75,67,45,67,40,65,71,67,67,67,67,67,67,44,67,65,47,67,97,67,67,67,67,40,45,67,45,75,45,65,44,75,67,75,40,64,67,65,67,45,67,40,64,67,47,67,67,71,67,67,67,67,65,67,67,67,65,67,40,67,67,75,65,40,67,47,33,67,45,67,45,67,47,65,67,67,41,65,45,40,45,40,47,67,67,45,40,67,33,45,67,45,67,47,47,67,67,67,67,44,47,67,67,65,75,65,67,64,67,64,67,45,65,67,67,65,45,67,75,67,67,67,67,65,67,64,67,67,67,96,67,44,67,67,47,44,40,67,67,67,67,67,65,67,45,65,45,44,65,67,67,67,67,67,67,67,67,67,65,67,67,67,40,40,45,40,40,67,71,47,65,64,40,67,67,67,64,65,67,67,47,40,33,45,40,64,45,65,45,44,45,47,45,47,40,67,67,67,64,40,67,67,40,33,65,67,40,45,75,97,79,75,67,65,67,67,96,96,67,64,45,45,67,67,79,67,47,67,67,44,67,67,67,67,75,47,67,67,79,67,71,75,67,67,67,79,67,67,45,67,45,67,67,67,67,67,67,101,79,67,40,45,67,67,65,45,67,67,67,65,65,45,44,64,65,40,67,67,67,67,67,67,67,67,40,67,67,41,67,44,67,67,67,67,40,65,40,67,67,40,64,67,67,40,40,40,40,47,67,47,47,67,67,67,44,44,71,45,67,67,67,75,75,67,96,65,67,67,67,67,67,65,65,67,75,67,79,75,67,67,67,67,67,67,64,79,79,67,45,65,67,67,67,79,67,67,67,75,65,67,67,79,67,67,67,67,67,75,101,101,67,67,67,45,65,67,64,67,75,33,45,75,67,67,67,75,65,40,45,45,47,79,75,67,67,67,45,67,67,67,67,40,45,67,45,64,67,67,67,64,67,40,45,45,40,40,64,33,40,67,75,44,45,65,67,67,67,67,71,67,64,65,75,67,67,67,97,67,67,67,67,45,67,65,67,33,45,75,67,67,44,67,75,40,67,67,67,67,67,67,67,65,67,67,40,67,67,67,67,79,67,64,67,67,67,44,65,67,40,67,67,79,71,45,67,71,79,79,67,65,67,67,67,67,44,65,33,67,45,65,65,65,44,67,75,67,47,45,41,67,67,67,67,44,45,67,64,65,45,44,44,45,67,65,40,45,65,67,65,40,40,47,67,67,65,67,40,64,65,67,67,67,65,41,65,75,65,75,67,67,65,67,71,67,33,44,33,40,67,67,67,47,45,40,65,45,67,65,45,47,65,67,44,44,65,67,45,67,67,65,33,67,45,67,64,75,65,67,67,67,67,65,65,75,64,47,47,67,67,67,44,40,67,67,96,44,40,67,66,67,47,45,45,67,45,44,40,45,45,40,40,67,45,47,45,33,40,45,40,44,64,45,44,44,40,40,44,45,40,44,15,32,32,67,67,40,33,45,45,67,67,67,67,45,64,67,67,75,75,67,65,67,67,45,67,67,65,65,65,45,67,67,67,67,65,65,45,67,67,75,67,67,67,67,67,75,71,67,67,75,67,67,75,75,65,65,75,79,67,75,67,75,67,64,67,67,67,67,67,65,67,65,67,67,67,67,65,45,65,67,47,67,33,40,67,67,44,67,67,67,45,67,67,75,71,45,65,65,40,67,45,67,40,44,44,67,67,65,65,65,45,40,67,40,44,64,67,44,45,67,67,67,67,44,44,47,40,67,75,71,75,96,65,67,101,75,67,71,64,65,67,67,67,75,67,67,45,67,79,67,71,67,67,75,67,75,75,67,79,67,67,75,67,67,67,67,47,67,67,101,75,79,67,67,44,67,75,79,67,67,65,67,67,67,67,40,64,67,75,67,64,67,47,67,67,65,44,65,47,67,45,67,67,67,44,45,45,67,67,67,67,67,45,45,67,44,44,67,75,45,67,67,65,45,45,47,44,67,65,67,67,67,67,44,45,67,65,45,40,67,67,67,67,67,67,67,45,67,71,67,67,71,71,67,67,79,67,65,67,67,67,67,65,67,65,71,75,67,67,65,67,65,75,67,67,67,67,75,67,45,47,67,67,75,47,67,47,75,67,67,67,67,67,79,67,65,67,67,65,67,67,45,41,67,67,71,64,47,67,67,65,67,65,67,67,67,40,67,65,65,40,67,64,67,45,67,65,33,45,65,67,44,65,64,40,45,67,40,40,45,45,45,40,64,45,67,67,67,67,67,45,67,67,67,45,65,67,67,47,67,67,45,45,40,65,67,45,67,65,44,40,45,45,40,67,45,67,67,67,45,67,45,47,65,67,67,65,45,64,45,64,45,45,67,44,67,67,67,45,67,67,67,67,33,47,47,67,67,65,67,75,65,67,67,40,65,45,40,44,45,65,67,45,67,40,44,40,65,40,67,67,67,65,44,67,67,65,65,45,40,40,67,67,67,67,67,67,67,67,65,40,45,67,44,40,75,40,47,45,65,67,15,33,40,67,79,96,65,67,79,75,65,67,67,75,79,67,67,67,79,67,67,67,67,67,65,67,75,67,79,67,71,75,67,75,65,67,67,67,67,33,67,67,65,67,67,67,75,64,67,75,67,45,67,67,67,67,75,45,67,33,40,67,67,67,67,40,67,67,67,67,45,45,45,65,67,65,67,65,67,44,65,67,67,45,67,45,67,67,33,40,67,75,44,67,65,45,67,67,67,65,67,45,67,67,67,45,75,65,67,67,67,96,67,33,45,40,67,67,97,79,75,75,79,75,67,65,40,65,45,67,75,67,67,67,67,75,75,67,67,67,67,67,65,67,67,75,67,75,75,67,65,15,67,65,65,67,75,67,79,75,96,44,67,67,79,45,64,65,75,67,67,45,65,67,67,67,67,67,71,67,75,67,40,67,79,75,67,64,67,65,67,44,67,67,75,75,67,67,67,67,96,40,40,67,65,67,79,67,45,67,67,67,67,67,65,45,65,40,47,65,67,65,67,67,67,65,67,67,71,67,67,67,67,75,67,67,67,65,67,47,44,67,75,67,67,64,65,67,65,75,67,67,71,67,67,45,67,75,97,75,67,67,67,44,67,67,67,67,67,96,67,67,67,67,47,40,44,67,40,65,96,71,96,67,45,45,40,64,67,40,67,40,67,33,40,67,47,64,67,47,67,67,67,45,67,67,67,67,67,67,45,67,67,45,65,45,64,45,41,45,67,65,47,44,65,40,45,67,45,45,67,64,67,33,45,67,75,67,47,64,71,75,67,45,67,67,67,67,45,47,65,67,65,67,65,67,67,40,47,40,45,67,67,67,67,65,47,40,40,65,67,67,67,67,67,65,75,67,45,67,45,41,44,44,67,67,75,65,45,67,45,67,67,67,65,33,40,44,45,45,67,45,67,67,45,40,33,45,40,33,44,45,33,40,40,41,45,40,65,40,44,45,45,45,67,40,44,65,67,65,40,40,40,67,40,47,45,40,64,40,44,40,40,40,65,40,40,67,67,65,67,75,75,67,75,65,67,67,67,47,65,67,65,44,45,45,75,67,67,67,67,67,67,67,75,67,67,67,67,65,67,47,67,67,79,67,67,67,75,65,67,67,75,64,67,67,67,45,67,67,67,65,65,67,67,71,44,45,67,67,65,45,67,40,67,75,75,67,40,45,40,45,67,67,65,45,44,33,65,75,47,40,40,67,67,65,67,67,65,67,79,67,45,45,45,67,65,45,64,65,65,67,79,45,67,67,67,67,67,40,67,67,75,67,67,75,67,67,67,45,67,45,67,65,67,65,67,67,67,71,67,45,65,79,65,67,75,79,67,67,67,44,67,67,67,67,67,79,67,65,45,65,67,67,75,40,67,67,79,75,75,67,75,67,65,67,67,75,67,67,67,75,75,75,75,44,67,65,75,45,65,67,67,64,45,67,67,67,47,40,65,75,67,67,67,67,67,67,67,65,47,67,64,67,67,44,65,65,67,67,67,67,67,71,67,67,75,67,75,67,67,67,67,40,65,75,79,67,67,67,75,67,67,67,67,67,67,67,67,65,67,45,67,45,64,67,65,75,67,67,67,67,67,40,65,67,45,67,65,67,67,45,67,65,67,67,79,75,71,44,67,40,65,67,67,75,67,65,67,97,75,41,44,67,67,67,45,44,67,71,67,67,44,40,40,40,40,40,67,45,67,65,67,67,67,45,40,67,67,67,75,67,45,65,65,67,44,45,47,65,67,67,67,40,40,67,67,64,67,44,71,45,64,96,67,65,67,67,67,67,67,45,67,67,67,75,67,65,65,65,65,67,67,75,67,40,47,45,40,45,44,67,75,75,67,32,40,15,47,67,67,45,67,67,67,47,65,67,67,65,65,40,44,44,67,64,45,67,65,44,33,65,65,45,40,65,67,67,67,40,67,67,67,47,33,65,40,45,67,65,67,67,44,40,45,79,65,67,32,40,67,45,65,45,64,40,45,67,45,44,47,67,65,44,33,45,33,45,67,45,44,47,45,40,44,45,45,67,67,45,67,67,67,75,67,67,75,67,79,67,67,47,45,67,67,75,65,41,47,67,75,75,71,75,75,79,67,67,45,45,65,71,67,67,67,65,67,67,41,45,75,67,96,67,67,45,47,67,67,65,40,65,64,67,45,67,67,45,67,67,47,40,67,47,65,67,67,65,67,67,67,47,67,67,67,45,67,75,67,67,65,45,67,75,65,67,65,44,40,67,67,64,64,65,45,45,65,65,45,65,64,40,41,67,45,45,45,75,79,67,67,67,75,67,67,67,67,75,67,67,67,67,67,64,45,67,75,79,67,65,67,67,67,67,67,67,67,67,67,67,65,67,75,75,75,71,65,67,75,65,44,47,75,75,67,64,65,67,67,67,67,67,67,67,75,45,67,67,65,67,67,75,96,67,45,67,67,67,67,67,67,45,75,67,67,67,67,64,67,79,67,67,44,67,67,67,40,44,45,44,67,67,67,67,75,67,67,47,47,65,67,67,67,45,67,65,65,79,65,67,65,44,67,67,67,79,67,67,67,75,67,45,65,75,75,75,67,75,75,65,67,67,67,75,67,67,67,67,75,67,67,67,67,75,67,71,67,79,67,65,67,40,65,75,75,75,67,67,67,47,79,67,67,67,67,67,67,67,45,45,67,67,65,67,40,45,75,67,67,45,44,65,67,67,65,67,65,65,67,41,67,79,67,67,67,65,45,67,45,44,67,65,67,67,65,67,67,45,65,65,45,14,45,64,67,65,47,45,67,67,45,67,67,67,75,65,71,65,65,40,67,67,40,67,65,65,65,45,65,65,67,75,67,45,45,65,67,67,67,64,67,67,67,40,40,65,40,44,67,40,67,65,45,65,47,45,67,45,67,40,45,47,67,45,67,65,45,47,67,65,45,47,67,67,67,44,40,40,67,44,67,40,44,67,65,45,67,67,67,45,65,45,40,67,45,33,40,40,40,44,47,40,15,33,15,45,40,41,45,67,44,45,44,64,67,67,65,44,45,44,65,41,33,40,67,44,41,65,75,67,79,71,79,67,79,67,71,67,65,67,67,67,71,67,75,64,45,67,67,67,71,67,67,67,67,40,45,67,67,67,67,67,67,64,75,67,67,67,67,67,75,67,67,67,67,45,71,67,67,75,67,75,64,67,67,67,67,74,65,65,67,65,67,44,40,40,45,45,44,65,67,33,67,33,75,96,45,45,47,67,67,67,67,40,45,67,67,65,65,40,44,64,41,64,45,65,67,40,65,67,67,67,67,67,67,67,67,67,67,65,67,67,79,96,67,67,75,67,75,67,67,67,67,75,67,44,40,67,67,67,67,101,75,67,67,67,67,67,65,65,67,67,75,97,67,67,79,67,67,65,67,75,67,67,67,44,67,67,101,67,65,67,67,67,75,45,67,67,67,64,67,67,67,67,67,44,40,67,65,33,67,64,45,65,67,64,67,67,67,67,40,40,67,67,67,64,67,45,67,67,67,40,67,75,47,65,40,40,67,45,64,44,67,67,67,67,45,67,67,65,40,65,67,40,67,75,96,79,67,65,65,67,67,45,67,79,75,75,67,47,67,45,65,67,67,65,67,45,67,47,67,67,65,67,65,75,67,44,75,67,67,75,67,67,67,40,67,65,67,67,75,45,67,67,45,67,67,44,45,67,67,65,67,40,75,67,67,44,45,47,47,41,67,67,67,67,67,33,44,67,45,40,33,67,65,40,65,41,45,67,67,67,67,67,67,47,45,45,40,44,65,67,45,40,67,44,65,67,64,67,65,45,44,67,67,67,65,65,44,67,67,65,65,45,45,67,64,67,67,65,67,45,67,45,65,65,67,67,67,67,67,40,45,67,75,67,67,65,65,67,67,67,40,45,67,65,45,15,45,67,96,40,40,65,44,40,40,67,67,67,45,67,67,65,40,32,67,45,67,67,67,67,67,65,67,40,40,40,65,40,65,45,40,32,40,67,67,67,67,45,40,45,67,65,67,65,64,40,40,44,47,33,45,65,40,40,45,67,67,45,45,64,67,44,40,65,67,67,67,67,67,75,75,75,67,67,75,67,67,67,67,67,67,40,45,67,47,67,67,67,79,67,79,67,65,100,45,47,65,67,44,64,67,44,33,64,45,65,79,67,75,47,67,45,67,65,45,44,67,67,67,67,45,67,67,75,67,65,67,67,67,67,45,67,67,67,45,67,45,45,65,47,67,75,67,67,67,67,67,64,67,45,45,41,67,67,33,65,67,65,47,32,32,33,67,67,40,44,67,40,47,67,40,65,67,44,44,67,67,71,67,67,67,67,79,75,75,67,67,67,45,67,79,67,65,47,67,67,67,65,67,65,79,67,67,67,65,67,67,67,75,65,75,65,67,67,67,67,67,75,79,67,67,67,67,71,97,75,67,67,67,67,67,67,67,67,67,65,67,65,75,65,67,47,67,65,67,64,67,65,65,64,67,45,67,65,67,67,44,45,75,67,45,65,67,64,65,67,65,67,67,67,45,65,47,44,67,75,67,67,67,45,67,67,65,67,45,44,67,67,67,67,67,67,67,75,67,65,67,67,67,64,65,67,67,75,75,65,67,96,65,67,67,67,67,71,65,65,67,75,44,65,67,45,67,67,67,44,45,40,40,67,67,45,67,67,79,67,67,64,33,41,45,67,67,67,67,67,67,75,79,67,67,67,79,47,44,67,40,45,67,67,67,67,96,45,45,67,67,47,47,65,67,67,67,67,44,45,40,75,67,71,67,71,64,45,45,65,75,67,44,40,65,67,67,67,67,65,67,65,65,67,75,67,65,67,67,67,67,67,64,65,67,45,45,65,75,75,67,67,40,44,47,65,67,40,47,67,71,45,40,65,67,67,47,67,45,45,67,40,40,45,67,75,65,40,67,44,45,67,67,67,67,44,45,67,45,40,33,67,67,65,67,45,65,65,65,40,14,33,65,45,45,67,45,40,67,44,67,40,45,44,40,40,64,40,64,45,45,67,41,67,65,44,67,65,45,40,40,33,67,67,44,40,40,45,45,40,40,45,44,45,44,45,67,67,67,65,44,67,67,67,67,67,65,45,40,44,67,67,67,45,67,33,44,64,67,67,67,67,67,45,67,67,79,71,67,64,67,45,45,33,65,67,67,65,67,67,96,65,67,45,75,67,64,40,47,67,75,40,65,67,64,67,67,44,67,45,67,45,44,45,67,65,71,67,45,67,67,45,64,67,67,67,65,67,67,44,65,45,67,47,64,67,65,40,65,67,67,67,67,45,67,75,65,45,65,67,67,40,65,67,67,67,67,79,96,65,67,67,67,67,75,101,75,67,65,45,64,67,75,101,75,75,65,67,67,67,67,67,67,67,75,44,65,75,65,40,67,67,67,67,65,67,47,65,67,67,101,67,96,67,75,67,97,67,67,67,79,67,75,40,45,67,67,67,67,67,67,45,67,67,65,67,67,64,65,67,40,65,67,67,67,67,67,67,45,67,79,67,67,40,65,65,67,75,75,65,67,45,65,44,65,45,75,79,67,40,47,65,65,45,45,67,67,40,44,45,67,75,65,67,75,75,67,75,47,65,67,65,67,47,41,67,79,67,45,47,67,65,67,96,71,101,67,67,45,67,74,44,47,67,67,67,67,65,67,67,67,65,67,45,67,64,67,67,75,75,65,67,67,75,75,67,47,67,45,67,45,67,67,67,71,45,45,45,65,40,65,47,67,67,96,44,65,67,67,64,47,67,67,67,67,47,44,65,47,67,67,65,65,40,65,65,33,40,75,96,67,45,67,67,67,65,67,67,45,45,67,67,75,67,75,67,96,45,47,65,67,67,67,67,45,67,67,67,67,67,67,40,47,75,67,67,65,67,67,64,45,65,47,47,45,67,67,67,67,45,47,41,45,45,65,67,67,65,40,65,67,47,67,75,65,79,67,65,44,67,44,67,67,41,67,67,65,32,32,40,40,40,65,67,65,65,67,33,45,40,33,40,40,67,67,40,45,47,71,65,65,67,67,64,45,47,44,40,40,40,65,71,67,45,45,65,65,65,45,67,64,33,40,67,71,67,45,67,67,67,75,75,67,67,40,40,65,64,47,65,65,47,67,67,67,67,67,67,45,67,67,65,44,67,67,40,65,67,75,67,67,67,40,67,67,65,67,67,79,67,67,67,67,45,40,47,45,67,67,67,65,45,45,40,65,40,44,47,65,45,65,65,67,67,67,67,65,45,67,67,67,65,67,44,65,40,45,67,67,67,67,65,67,67,67,67,47,67,65,40,40,40,67,67,45,41,67,44,41,40,40,71,67,40,44,67,67,79,75,67,67,67,67,67,65,67,67,67,40,67,67,79,67,44,47,67,67,67,79,71,75,67,67,67,65,75,67,67,45,67,67,67,79,64,67,67,79,65,79,67,79,67,67,67,79,67,67,67,67,67,65,65,65,67,65,40,65,47,67,67,67,67,67,67,67,67,40,40,67,67,45,40,75,67,33,40,65,67,67,67,67,67,67,67,67,67,67,64,67,67,67,67,45,45,67,79,65,65,65,67,67,45,67,79,67,67,67,67,65,75,67,79,67,67,65,75,67,65,45,67,45,67,75,67,67,67,67,64,67,67,67,67,67,67,67,45,44,67,75,32,47,67,67,67,67,45,65,65,67,67,67,75,67,65,67,67,67,67,65,67,67,44,67,65,45,45,65,67,67,44,67,67,67,33,44,75,67,65,75,67,45,67,65,45,75,67,67,40,65,67,67,79,67,67,67,67,67,79,67,67,67,67,45,65,65,67,96,67,67,64,65,67,75,45,67,65,67,65,45,67,79,67,67,65,47,45,67,67,75,67,40,47,40,65,67,65,45,40,47,67,67,67,67,67,47,67,67,64,40,64,45,67,67,67,44,65,67,45,64,67,67,44,65,45,65,40,67,67,64,67,75,67,67,67,75,67,45,47,45,67,65,45,67,40,67,67,65,41,40,64,67,45,45,47,47,45,67,67,40,45,44,67,67,47,65,45,33,45,45,40,44,45,47,40,65,15,40,45,67,67,64,44,67,65,45,44,44,67,65,67,67,67,67,67,67,67,75,67,67,65,44,67,67,67,41,65,67,67,71,44,67,67,67,75,45,67,67,40,64,67,67,67,45,64,67,67,67,45,67,45,65,67,67,64,71,65,64,65,67,67,67,65,67,67,67,75,75,67,67,67,64,67,67,67,67,44,40,40,40,65,45,65,67,67,40,45,33,32,67,67,67,44,44,67,67,47,67,67,67,67,67,67,64,44,67,45,47,65,45,45,67,67,47,40,45,33,45,65,65,65,67,67,65,67,45,67,67,67,67,67,65,67,67,65,75,65,67,75,67,79,67,45,67,65,65,67,67,67,75,67,65,67,67,67,67,65,67,67,67,67,67,67,67,75,71,67,67,45,67,64,67,67,71,67,65,40,67,67,67,67,67,67,67,67,67,65,67,65,45,44,67,75,65,65,67,67,64,67,65,65,67,75,67,67,45,65,45,67,67,67,67,67,67,75,67,67,67,67,67,67,67,44,67,67,67,45,67,44,47,40,67,75,67,65,67,67,75,65,67,75,75,75,71,75,79,67,67,71,67,65,67,67,67,67,67,75,67,67,45,67,67,65,75,67,75,75,75,67,67,67,67,67,67,71,67,75,67,45,67,65,67,67,67,75,75,67,65,67,67,67,67,65,45,67,67,67,67,67,67,67,67,67,45,45,44,47,67,47,45,65,75,40,67,45,67,40,40,45,67,45,45,47,67,65,65,67,67,45,65,67,45,45,40,45,67,79,67,67,67,44,45,67,67,71,67,47,67,67,67,71,67,67,67,67,45,67,67,45,45,44,40,67,71,67,67,44,67,65,67,67,65,67,67,67,67,65,44,45,45,40,67,65,65,65,75,45,45,67,67,45,71,67,67,67,67,47,65,67,67,44,45,75,45,40,65,65,65,71,67,45,65,44,67,65,65,65,67,45,67,44,64,67,40,33,67,47,33,44,40,40,67,67,67,40,45,67,67,67,65,45,65,65,45,65,33,14,45,67,40,33,45,45,67,64,67,67,67,44,33,65,75,75,71,67,67,75,65,67,47,45,33,44,65,67,67,45,45,45,65,40,40,65,40,47,75,44,33,40,67,65,75,64,67,75,67,67,67,47,64,67,67,65,67,67,67,65,67,65,47,45,67,67,67,67,67,67,65,67,67,47,45,45,67,40,67,67,45,67,67,65,47,67,67,67,67,32,67,75,40,40,32,44,65,65,65,65,41,44,67,45,41,45,40,45,65,67,67,40,45,65,33,33,40,45,67,44,65,65,67,45,67,67,67,67,67,71,67,96,75,75,65,67,45,67,47,47,67,67,45,44,45,65,45,67,67,45,67,75,44,67,45,64,67,67,71,67,47,67,75,40,40,64,67,75,44,45,65,67,100,47,67,67,67,67,47,64,65,65,67,67,45,65,67,45,65,40,67,40,44,65,45,65,67,67,67,45,67,45,67,79,44,40,40,65,67,67,79,67,45,45,65,67,65,47,67,75,67,47,40,64,75,75,45,40,67,67,79,67,45,67,40,44,65,67,79,67,67,67,75,67,65,67,67,67,67,67,40,67,97,67,65,47,67,67,67,67,75,67,79,67,40,65,64,67,65,67,65,67,67,65,67,45,44,65,67,75,67,65,67,67,67,75,96,67,65,64,67,67,67,67,67,67,67,75,67,45,75,65,67,67,67,67,67,44,41,67,67,67,67,45,67,67,67,45,45,67,65,65,47,65,65,44,67,67,75,65,40,67,67,75,65,41,44,75,65,47,67,67,67,45,67,96,67,64,40,65,67,67,67,67,97,101,67,67,67,75,67,65,47,67,67,45,65,44,40,45,40,65,67,40,67,67,65,47,47,67,67,40,65,67,67,65,67,67,33,40,64,67,67,65,67,33,67,67,67,67,45,65,67,67,67,40,40,45,65,67,65,45,67,75,67,47,40,40,45,44,65,67,47,33,47,65,71,67,65,64,47,47,44,45,45,40,65,65,67,40,47,45,40,45,40,40,40,45,45,65,40,33,45,45,67,67,64,67,67,44,47,47,67,79,67,67,67,40,47,75,65,45,67,67,67,45,67,44,40,64,45,67,45,65,65,64,67,65,45,67,45,64,67,67,71,96,67,65,79,67,44,67,40,44,45,33,40,65,67,67,67,44,44,45,67,67,67,45,45,47,45,65,44,65,65,65,67,65,47,65,40,33,44,65,67,44,40,44,75,67,65,40,40,64,47,67,67,47,64,67,67,67,65,47,67,65,40,40,33,40,67,67,47,65,65,67,67,67,45,67,45,33,40,44,67,75,75,67,67,67,67,67,67,67,67,67,67,47,47,67,65,45,65,44,40,67,65,67,97,67,67,45,45,45,67,65,67,67,41,45,67,47,65,65,67,67,45,45,67,45,79,67,75,67,65,67,67,67,75,44,45,40,67,67,64,64,67,45,67,64,67,67,67,67,67,67,67,44,67,41,67,65,65,41,33,45,65,67,67,67,67,45,65,67,71,45,67,47,67,67,67,67,75,67,67,67,67,75,44,45,45,67,67,47,67,67,67,96,67,64,65,75,75,75,67,67,45,64,47,67,71,67,79,67,65,67,65,44,67,67,79,67,47,67,67,67,67,47,67,67,40,45,65,67,67,67,67,67,67,44,75,67,71,67,67,45,65,47,67,67,71,67,67,67,67,67,67,47,67,75,75,67,67,40,45,67,40,40,67,67,67,67,67,67,67,45,40,65,67,67,67,65,65,75,67,67,67,67,67,75,65,40,45,41,75,79,67,65,67,67,67,67,65,67,67,67,67,75,79,67,67,67,45,40,65,67,75,40,40,44,40,67,75,79,97,67,67,45,40,67,75,40,44,67,67,67,65,67,67,65,67,67,67,44,65,45,64,45,65,67,67,40,45,67,67,67,67,67,67,67,67,67,67,45,67,40,33,64,67,44,67,67,67,40,40,40,40,41,65,65,64,40,65,40,75,96,67,45,45,47,47,44,65,45,33,40,75,45,67,65,67,75,40,41,47,33,44,67,64,40,65,65,67,45,65,67,45,47,67,79,79,67,75,67,67,67,67,67,65,45,65,45,44,65,65,67,67,45,65,40,64,67,67,45,67,67,65,45,67,67,45,40,40,67,67,67,67,65,44,45,45,45,45,40,33,44,40,65,75,67,65,67,45,67,67,67,67,44,67,44,65,65,67,47,65,45,44,67,40,33,40,45,65,47,45,45,40,45,67,44,45,64,45,44,40,33,45,65,67,64,40,65,67,75,45,44,67,67,45,75,75,67,67,67,65,40,45,67,67,67,65,64,67,71,96,67,67,67,67,67,67,67,45,65,65,40,65,75,65,65,67,67,40,67,67,67,67,67,67,67,67,67,67,75,67,67,40,67,67,67,67,67,67,65,45,45,75,67,75,65,67,67,65,67,67,67,67,45,45,65,67,67,67,44,45,40,67,45,47,67,65,67,65,40,33,44,64,67,47,67,67,45,40,67,67,64,47,67,67,67,67,67,67,67,65,65,40,40,65,67,47,79,67,67,79,67,67,67,45,71,67,65,67,45,67,67,67,75,67,67,79,67,67,67,75,96,47,65,67,65,67,65,67,47,67,67,67,67,65,67,65,40,47,65,67,67,67,96,47,65,67,65,67,75,67,67,67,67,67,64,79,65,96,67,45,45,67,67,47,33,45,67,67,67,67,67,75,67,79,65,67,40,65,67,45,67,67,65,67,44,67,75,67,67,44,67,65,67,67,67,45,67,75,65,65,67,71,67,45,40,45,65,67,67,71,40,47,64,67,47,45,75,67,65,67,65,67,75,67,41,67,47,65,67,67,67,67,65,67,67,67,65,67,40,67,65,44,67,67,45,65,44,64,67,67,65,64,67,67,67,45,65,75,45,65,40,67,75,67,67,67,65,67,67,67,79,67,64,66,67,67,40,44,40,65,67,67,45,67,45,65,67,65,64,45,40,45,65,45,41,67,65,67,67,45,40,40,45,67,40,45,65,40,45,67,67,45,45,45,67,67,44,67,67,75,67,67,67,67,67,75,65,64,67,67,45,67,67,79,67,67,67,65,40,67,67,67,45,45,40,33,45,67,67,47,67,64,45,67,67,75,67,67,67,65,41,45,45,45,67,67,67,67,67,79,64,67,65,79,65,44,65,45,65,67,67,67,40,45,67,67,67,67,67,65,45,44,40,65,65,75,65,65,40,41,40,40,44,65,44,67,65,67,40,64,96,45,67,44,45,45,47,64,45,45,67,47,67,67,67,65,67,44,40,47,45,67,75,45,40,67,65,67,45,45,67,47,44,40,67,75,75,65,67,67,67,67,65,67,67,65,65,40,67,45,67,67,45,67,67,65,67,45,67,67,75,67,14,40,65,67,67,67,67,67,67,67,47,40,65,67,67,67,67,67,40,67,67,75,79,67,67,67,67,67,67,65,67,67,67,67,67,67,65,65,64,47,65,67,40,67,67,67,67,67,67,67,67,45,41,44,67,75,67,67,67,67,44,67,67,67,75,67,67,44,0,33,40,67,75,45,40,65,65,67,41,65,45,67,67,67,67,67,67,67,67,97,67,75,67,67,65,45,67,67,101,79,67,45,67,67,71,45,65,65,75,75,67,65,65,67,67,67,75,67,67,67,67,71,67,44,67,71,67,75,67,67,67,71,67,96,67,65,67,67,75,75,67,67,67,65,64,67,33,67,67,67,45,40,65,67,67,33,67,64,67,67,45,45,97,67,67,14,65,67,67,67,67,40,45,67,79,65,67,67,64,65,65,40,67,67,97,75,67,65,67,67,65,67,67,75,47,65,67,75,67,67,67,65,40,67,67,47,65,67,67,67,75,67,75,67,47,45,67,45,65,45,67,71,45,65,67,67,67,45,65,45,79,67,67,67,65,40,67,67,67,75,67,67,67,67,64,67,67,67,67,67,45,33,45,65,67,75,67,65,65,75,67,67,67,32,45,45,65,40,67,67,65,67,67,65,67,40,45,45,67,67,44,41,47,67,47,44,67,45,40,65,67,67,45,67,65,67,65,67,65,65,45,67,45,47,67,75,40,67,97,75,67,67,45,65,67,67,47,45,67,65,47,67,67,67,71,44,40,65,65,67,44,67,67,67,45,65,40,40,33,45,44,67,67,44,45,75,65,44,67,67,65,45,45,45,45,75,65,75,79,65,65,40,67,67,45,67,40,44,67,40,40,45,67,67,40,40,47,67,40,40,45,33,33,65,44,45,44,44,45,45,67,67,45,40,33,40,44,40,65,67,40,44,45,67,45,40,33,33,40,33,32,44,40,65,44,40,67,65,45,45,67,79,67,67,67,67,45,40,64,44,47,65,67,45,65,75,79,67,44,65,67,33,67,65,67,67,64,67,65,67,79,79,67,45,65,67,65,67,64,67,67,96,65,67,40,65,44,65,67,67,67,45,40,45,67,67,45,44,67,67,67,67,66,75,67,71,67,64,40,67,45,45,67,67,40,64,65,67,75,67,44,45,65,67,67,45,40,45,65,45,45,67,67,65,67,67,65,65,67,67,67,44,45,64,67,47,67,67,67,64,45,65,75,79,65,67,67,67,67,44,67,67,67,67,67,67,79,79,75,67,65,67,75,64,67,65,65,75,67,65,45,45,65,45,67,67,67,67,67,67,67,67,40,40,67,67,67,45,45,67,67,79,67,67,65,67,67,67,67,65,67,67,45,64,67,67,67,67,67,45,65,65,40,64,67,67,45,67,67,71,96,67,47,40,44,67,67,45,47,67,40,67,75,65,65,65,67,65,67,67,67,67,75,67,64,67,64,67,65,67,67,67,67,75,75,67,67,65,67,75,67,67,67,47,44,41,45,45,67,67,64,74,67,65,65,47,67,67,67,79,47,65,67,67,67,67,67,44,67,44,67,75,45,67,44,79,65,67,67,67,64,65,44,67,47,40,44,47,67,67,67,67,67,65,67,67,41,45,44,40,40,44,67,67,65,45,45,65,44,65,32,65,67,45,45,65,67,67,45,67,40,45,44,67,67,67,67,67,75,64,67,40,65,67,79,67,67,67,67,67,65,33,67,67,44,40,65,67,67,67,67,67,75,67,75,75,47,67,67,44,45,67,65,67,44,45,67,47,67,67,67,71,40,65,40,45,75,67,67,40,45,65,67,45,40,64,33,45,67,65,64,67,67,67,64,67,67,45,44,41,45,67,45,45,67,47,47,67,45,67,33,40,33,33,44,67,67,67,67,67,44,67,44,40,64,33,45,40,47,67,44,44,40,44,45,44,40,67,67,67,47,45,45,45,45,65,67,40,45,65,67,67,65,45,47,44,40,33,45,75,67,71,67,67,67,67,67,75,71,67,67,65,40,67,96,67,45,47,67,45,64,67,67,75,67,65,33,45,45,65,67,65,67,67,67,67,67,67,45,65,65,67,67,96,67,67,65,67,65,65,67,40,67,67,67,47,67,64,41,67,33,67,64,47,40,40,41,40,65,65,67,75,67,67,65,67,67,65,65,65,67,96,65,64,33,40,45,67,45,47,40,41,65,47,40,45,47,67,67,67,41,67,65,67,67,45,45,45,44,65,79,96,75,75,79,79,75,67,67,47,67,67,65,40,65,75,67,67,45,65,40,45,79,67,67,67,65,67,45,65,67,67,67,65,67,65,40,45,67,67,67,75,67,67,67,67,44,79,67,79,67,67,67,45,65,65,65,65,47,67,65,67,65,75,67,75,67,45,45,44,40,65,67,67,67,79,67,67,67,67,65,65,75,67,67,75,67,67,67,65,45,47,67,67,65,40,65,67,67,67,67,65,67,67,45,65,64,45,65,40,65,44,65,75,67,75,67,67,100,67,67,67,65,67,65,67,67,67,67,67,67,67,67,65,67,67,45,65,65,67,45,45,67,67,67,67,67,45,67,45,65,45,67,67,67,67,67,71,67,67,65,71,67,45,65,67,75,75,67,47,65,67,67,67,40,67,40,44,67,40,40,45,45,67,44,67,67,67,67,67,79,67,40,45,67,67,67,65,40,67,45,65,67,67,67,67,65,40,65,45,65,67,67,67,45,75,67,67,67,40,67,67,45,67,47,67,67,67,67,67,67,67,75,67,67,45,47,40,45,45,40,44,41,67,65,40,67,67,67,64,45,40,67,65,67,64,40,45,67,64,64,67,47,47,41,40,67,67,40,45,47,67,44,67,67,44,45,67,67,67,45,33,40,33,40,40,45,67,67,67,33,40,65,67,45,45,33,33,40,40,40,65,67,67,65,67,67,33,47,41,45,67,45,64,65,67,44,45,65,44,45,65,33,67,79,40,33,44,32,45,45,40,40,67,40,15,40,67,67,79,65,65,71,67,67,65,67,67,75,67,65,71,47,67,44,67,67,67,67,67,67,67,65,45,47,64,65,65,47,67,75,67,45,67,15,44,67,65,45,67,65,75,47,67,67,75,67,45,65,67,75,67,44,40,67,65,45,44,32,67,67,75,67,67,67,65,67,67,65,65,44,65,45,65,71,67,45,64,67,67,45,67,67,44,44,67,47,64,45,67,67,65,67,67,67,67,67,45,40,65,64,67,67,67,67,45,45,67,67,67,75,67,67,67,67,67,67,67,67,67,65,67,47,67,67,67,67,67,67,65,67,67,67,79,67,65,45,67,67,67,67,47,67,67,75,67,67,67,75,97,79,67,45,75,79,71,67,79,67,67,67,75,67,67,67,67,67,65,67,40,41,67,67,75,67,65,40,65,67,47,67,67,65,67,65,75,67,45,44,45,45,65,65,45,65,64,47,75,75,45,64,67,67,44,67,45,67,67,67,45,67,67,67,65,45,64,71,67,45,75,67,67,67,67,67,67,67,71,79,67,67,67,67,67,67,67,75,67,65,67,67,40,64,45,65,67,96,96,71,67,79,71,67,67,67,67,67,67,40,44,65,67,65,67,67,67,45,65,45,67,67,65,67,67,67,67,67,67,67,44,67,67,67,67,45,65,65,64,67,67,67,65,67,45,67,47,47,41,65,45,45,44,65,65,45,45,65,45,44,65,41,65,47,67,67,67,67,67,47,67,75,67,67,67,65,67,75,67,67,67,67,67,67,75,75,67,45,67,41,47,45,67,67,65,67,67,33,67,65,67,67,44,65,65,67,45,65,67,67,67,67,67,67,65,67,65,67,65,64,67,45,45,45,65,67,67,44,45,40,65,67,67,67,65,44,45,45,65,40,47,67,67,65,64,67,67,44,67,40,40,47,45,40,75,40,40,40,40,44,67,67,40,65,47,67,40,45,67,40,33,45,44,45,67,67,44,15,44,44,44,40,67,65,47,40,33,40,67,45,44,67,45,47,45,45,67,67,79,67,67,67,75,65,67,47,45,40,45,65,65,79,67,45,45,67,67,67,65,67,67,45,67,40,45,67,65,44,67,40,40,45,67,65,45,65,67,75,75,47,67,67,65,67,101,67,67,65,67,75,45,47,67,67,75,67,67,40,47,67,67,45,44,67,67,45,67,65,64,65,67,40,67,40,64,67,65,67,65,45,67,33,40,44,32,67,67,65,41,45,67,45,45,65,67,67,67,65,45,65,45,67,40,67,65,65,65,67,75,65,45,65,67,67,67,44,67,75,67,45,67,71,67,65,67,67,65,64,65,75,67,101,96,71,64,67,65,67,67,67,65,64,67,75,75,71,65,45,67,67,67,67,67,65,67,67,75,79,67,44,65,67,67,67,67,67,65,65,67,47,67,67,67,45,44,67,67,65,67,65,67,67,75,67,79,67,67,67,64,67,44,67,67,45,44,45,67,67,67,67,67,65,67,40,47,65,67,71,65,40,65,45,67,65,65,67,67,67,75,67,67,75,67,67,75,67,67,67,67,67,67,67,65,75,75,45,67,47,65,67,65,75,67,75,67,67,75,67,67,67,67,67,67,45,45,67,75,75,45,67,67,67,67,65,65,65,45,67,75,75,67,67,67,67,67,40,40,65,45,67,65,65,67,67,65,67,65,67,67,40,67,67,75,75,65,45,67,67,67,67,44,45,47,44,45,65,47,47,67,64,33,65,67,67,44,67,67,65,44,67,67,65,41,67,67,67,45,67,67,67,67,75,75,67,47,47,67,67,40,40,40,45,44,44,33,64,45,67,65,45,45,67,67,45,44,67,67,47,67,47,45,67,67,44,67,67,67,47,75,40,40,45,65,67,96,65,67,45,44,67,67,67,40,45,65,45,67,40,40,67,67,67,67,44,41,65,45,40,33,65,40,45,67,67,45,40,47,45,44,75,45,33,45,67,45,45,67,40,47,67,40,45,47,41,45,45,65,40,44,33,45,33,40,40,40,40,45,47,65,67,47,40,45,65,67,67,67,67,65,47,67,67,67,65,67,65,44,67,67,67,67,65,45,67,45,45,67,67,67,44,65,67,67,67,96,67,47,65,67,65,67,33,44,67,67,67,65,40,67,45,67,65,67,67,45,45,67,67,75,67,67,65,67,67,45,45,45,67,75,67,40,45,40,40,67,40,67,47,47,45,67,96,67,67,40,67,47,67,44,64,47,67,67,67,65,47,67,67,71,65,67,64,67,75,45,44,40,47,67,45,40,67,67,45,47,67,67,71,79,71,67,67,75,67,67,44,65,67,65,71,67,67,67,67,67,67,44,67,79,67,67,64,67,67,67,47,65,67,67,67,67,67,67,67,45,67,71,67,67,45,45,65,65,64,71,67,67,65,71,75,67,67,67,45,64,45,65,64,79,67,67,65,47,67,44,45,40,44,65,64,67,65,67,65,45,67,45,67,65,45,45,65,45,40,64,45,67,75,67,65,45,40,47,67,65,67,67,32,40,40,71,67,67,67,67,67,67,75,96,67,67,79,67,67,47,67,67,67,65,67,45,65,67,67,75,47,67,44,67,75,65,67,67,67,65,65,44,67,67,67,67,79,67,67,96,44,67,67,67,67,67,65,75,67,75,65,67,67,67,65,67,75,96,67,67,65,67,67,65,47,47,67,67,67,40,65,67,75,79,67,67,45,65,45,45,67,65,67,47,40,45,67,67,65,67,67,67,67,75,65,47,65,65,67,67,65,67,75,67,67,65,67,67,65,65,67,67,45,67,45,67,67,45,75,75,67,67,67,64,40,45,65,67,45,67,67,67,44,40,67,45,64,67,67,67,67,67,67,45,67,67,65,65,67,64,67,67,45,44,45,67,65,96,67,67,75,67,65,67,67,45,45,67,71,47,40,40,67,67,67,65,67,67,45,65,44,40,65,67,65,67,67,67,67,44,47,67,75,67,45,44,40,40,67,67,67,65,65,67,65,45,67,67,67,67,47,65,40,65,67,67,40,65,40,67,44,40,67,75,45,67,45,67,75,79,67,67,65,67,67,65,65,45,67,67,67,67,67,45,40,64,45,67,67,67,45,67,67,67,67,41,65,75,67,65,67,67,67,75,44,33,44,67,65,96,67,79,67,45,41,67,67,67,67,67,67,75,65,65,67,45,44,45,45,67,45,67,65,44,67,67,45,67,67,67,67,45,40,65,67,45,64,45,44,65,67,67,40,40,47,67,67,67,65,65,67,67,64,67,67,67,100,67,65,67,65,65,65,67,65,45,65,67,67,67,67,45,67,100,75,44,75,67,45,45,67,67,67,67,44,67,45,45,40,65,67,45,67,75,75,67,67,67,67,67,33,45,67,47,67,65,67,65,67,67,71,79,67,67,67,67,67,67,67,65,65,67,67,75,67,67,67,65,67,67,67,67,67,67,67,65,67,66,67,71,67,67,45,75,67,79,75,67,40,67,67,65,45,67,67,67,75,75,71,67,65,67,65,67,65,67,44,67,75,67,67,67,45,67,44,47,79,67,65,67,45,71,79,67,67,45,65,65,67,40,44,45,40,45,67,67,79,97,47,67,65,67,67,67,71,67,75,67,67,47,64,67,67,65,47,45,65,71,67,67,67,67,45,75,67,75,44,65,67,79,67,47,67,79,67,67,67,67,64,65,67,67,64,67,67,67,67,65,64,65,67,67,67,67,67,67,40,67,67,67,67,45,67,75,67,67,71,67,67,67,67,45,65,67,65,67,45,67,67,67,67,67,67,75,40,67,40,65,67,75,67,67,67,97,96,75,67,67,67,65,67,65,44,40,40,44,67,67,67,65,45,44,45,45,65,67,65,67,45,47,47,65,67,67,67,47,65,47,67,67,67,45,45,75,44,40,40,45,33,67,67,67,65,47,44,65,67,67,67,67,45,65,67,47,47,65,65,79,45,65,45,67,64,65,45,67,65,67,67,67,67,67,47,40,65,67,40,67,41,67,44,47,65,67,67,64,79,67,67,67,65,67,67,65,45,64,40,67,67,67,65,64,67,67,67,96,40,67,67,45,67,67,75,65,65,47,45,67,75,71,47,67,33,40,65,40,45,64,65,67,67,67,67,67,67,67,67,67,64,45,45,67,45,44,67,67,65,67,67,65,44,67,67,75,67,67,44,67,67,67,40,44,67,65,67,40,44,45,44,67,67,40,67,67,47,67,71,67,65,67,64,67,71,40,44,47,47,65,65,64,44,44,44,40,65,67,65,44,65,45,41,33,64,47,67,45,40,45,67,79,40,40,45,67,47,65,65,79,67,67,67,67,67,67,67,64,65,45,65,65,96,67,67,67,40,44,45,45,67,67,67,44,44,67,67,40,45,67,65,67,67,67,67,67,67,65,67,79,67,79,75,71,45,67,75,75,79,67,65,67,67,67,65,65,65,67,67,67,67,67,67,67,47,65,67,67,65,67,67,65,44,67,67,71,67,45,44,65,67,67,67,67,67,47,67,75,67,67,67,67,65,45,67,67,67,67,67,64,65,75,67,96,67,67,75,67,45,64,67,101,67,75,67,67,75,47,71,79,65,65,45,45,67,75,67,45,44,67,79,67,75,67,65,64,67,64,67,65,67,67,67,75,96,67,67,67,67,65,67,67,65,67,40,65,65,96,75,96,67,45,67,67,67,67,47,45,67,67,67,67,67,67,75,67,67,47,64,67,45,67,71,67,64,67,67,75,75,67,67,67,67,64,67,67,45,64,65,40,45,67,67,67,65,47,67,65,67,67,101,67,45,67,67,75,75,67,75,79,75,79,67,79,65,65,67,75,45,67,67,67,67,65,33,45,65,67,71,45,40,45,45,44,75,75,40,67,45,65,67,45,67,47,67,67,75,67,45,75,40,45,65,67,67,75,65,67,47,67,67,67,67,67,45,67,65,65,45,67,67,45,45,67,45,67,65,67,67,45,47,67,45,75,45,67,67,67,67,75,67,67,67,47,45,65,45,44,45,44,44,67,75,40,40,33,45,47,47,47,44,67,75,67,65,65,47,67,67,67,71,67,65,67,67,96,47,45,65,45,67,67,67,67,67,40,45,45,64,67,75,45,40,40,45,65,65,40,33,67,67,45,40,45,67,75,65,67,67,65,67,100,65,45,67,67,47,67,67,101,47,45,67,75,79,67,67,67,67,67,67,67,67,67,47,79,45,75,67,67,44,45,64,40,45,67,67,45,40,67,45,75,79,75,45,47,44,65,65,47,45,64,45,45,65,65,40,45,65,67,67,67,67,67,45,47,67,67,44,67,67,65,71,67,64,65,75,101,71,64,67,67,67,67,67,64,47,33,45,45,65,79,75,75,67,67,67,67,67,67,97,101,47,67,67,67,65,67,75,67,67,65,67,67,67,67,67,47,65,79,65,65,45,75,79,79,75,67,65,67,75,47,44,67,67,67,67,67,47,75,67,75,47,67,71,67,67,44,67,67,44,65,47,67,79,65,47,64,44,65,47,67,45,67,67,67,75,65,45,67,67,45,40,45,40,67,67,47,45,67,67,67,45,47,71,67,67,75,79,75,79,67,65,96,67,67,79,67,67,67,44,45,67,75,67,67,67,67,67,67,75,67,67,47,65,67,67,40,67,67,79,67,67,67,67,79,64,67,67,79,67,75,75,67,67,96,100,75,75,67,67,67,67,67,67,67,67,45,67,45,65,67,67,67,67,67,45,67,67,67,67,67,67,40,67,67,101,75,65,40,67,75,75,67,67,67,67,79,67,45,65,67,67,67,67,65,65,75,67,67,67,65,45,67,67,47,75,79,67,67,100,101,101,79,67,67,67,67,75,67,67,67,67,67,67,67,67,67,67,47,44,65,67,67,45,67,65,67,67,45,67,67,67,67,67,64,67,75,65,67,67,67,67,67,67,67,47,75,67,67,67,67,67,79,75,75,71,67,67,67,67,65,67,75,75,75,40,64,67,64,67,67,79,67,65,47,44,67,67,67,79,44,67,75,65,45,40,40,65,67,40,44,67,65,45,45,65,47,65,75,67,75,67,67,67,67,67,67,67,74,67,67,67,67};
