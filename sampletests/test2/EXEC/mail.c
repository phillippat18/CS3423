/*
	Program "acts" as a mail process.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char c = 'A';

	printf("If this had been real, you would have just run\n");
	printf("%s %s %s %s\n", argv[0], argv[1], argv[2], argv[3]);
	printf("content of message:\n");

	//try and read 1 byte from stding and write stdout
	while( read(0, &c, 1) > 0){
		write(1, &c,1);
	}
	
	return 0;
}