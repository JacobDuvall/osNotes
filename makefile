all:activity

activity: structure.c
	  gcc -Wall -o structure structure.c

clean: 
	rm structure
