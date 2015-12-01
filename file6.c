#include <stdio.h>
#include <stdlib.h>


int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in read mode (r)
	fp = fopen("data.txt","r");
	int v1;
	int v2;
	char str[200];

	int rc;
	rc=fscanf(fp,"%d ; %d ;%[^\n]\n",&v1,&v2,str);
	while(rc==3){
		if(rc==3){
			printf("all good\n");
			printf("%d, %d, %s\n",v1,v2,str);
		}
		else{
			printf("no good\n");
		}
		rc=fscanf(fp,"%d ; %d ;%[^\n]\n",&v1,&v2,str);
	}


}