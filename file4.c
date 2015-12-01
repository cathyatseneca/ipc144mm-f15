#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in append mode (a)
	fp = fopen("hello.txt","a");
	if(!fp){
		printf("file could not be opened\n");
		exit(0);
	}
	fprintf(fp, "HELLO world!\n");

		//make sure file is properly saved
	
	fclose(fp);


	return 0;
}