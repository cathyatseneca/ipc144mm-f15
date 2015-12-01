#include <stdio.h>

int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in write mode (w)
	fp = fopen("hello.txt","w");

	fprintf(fp, "hello world!\n");

	//make sure file is properly saved
	
	fclose(fp);
	return 0;
}