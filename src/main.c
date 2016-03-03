#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <stdint.h>
/*
   My first attempt at doing something cool
   this program will load source code and just search for vulnerable 
   functions 
*/

Elf32_Ehdr *Ehdr;


int is_binValid(FILE * bin){
/* Is it even a binary??? */
// Parse magic number of binary
	Ehdr = bin;
	//mak
	puts("Checking if the binary is a valid x86_64 binary");
	printf("Ehdr: %d\n",Ehdr[0] );
	return 0;
}

int identBin(){
	/* Parse header infor and determine 
		what kind of file it is. MachO ELF PE etc*/
	return 0;
}


int main(int argc, char * argv[]){
	FILE *bin = NULL;
	bin = fopen(argv[1], "rb");														//open binary as read
	if (NULL == bin){
		puts("Error opening file");
		exit(EXIT_FAILURE);
	}
	
	if(argc != 2) {
		printf("Usage: binary\n");
		exit(EXIT_FAILURE);
	}

	if ( NULL == bin )
		puts("Error opening file");

	if (is_binValid( bin) == -1){
		exit(EXIT_FAILURE);
	}


}