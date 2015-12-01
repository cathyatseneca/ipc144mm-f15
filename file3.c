#include <stdio.h>

int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in append mode (a)
	fp = fopen("hello.txt","a");
	if(fp){
		fprintf(fp, "HELLO world!\n");

		//make sure file is properly saved
	
		fclose(fp);
	}
	else{
		printf("file could not be opened\n");
	}

	return 0;
}