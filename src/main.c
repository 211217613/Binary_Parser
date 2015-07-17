#include <stdio.h>
#include <stdlib.h>
/* My first attempt at doing something cool
   this program will load source code and just search for vulnerable 
   functions 
  */


void message(){
	puts("Missing command line argument");
}  
int main(int argc, char * argv[]){
	if(argc > 0 && argc < 2) {
		message();
		return -1;
	}

	FILE *bin = argv[1];


}