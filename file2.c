#include <stdio.h>

int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in append mode (a)
	fp = fopen("hello.txt","a");

	fprintf(fp, "HELLO world!\n");

	//make sure file is properly saved
	
	fclose(fp);
	return 0;
}