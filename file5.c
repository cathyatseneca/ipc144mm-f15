#include <stdio.h>
#include <stdlib.h>


int main(void){
	FILE* fp;
	//this next line opens the file
	//hello.txt in read mode (r)
	fp = fopen("historicaldata.csv","r");
	int year;
	int month;
	int day;
	float high, low;
	float precip;
	char cond;

	int rc;
	rc=fscanf(fp,"%d,%d,%d,%f,%f,%f,%c\n",&year,&month,&day,
			&high, &low, & precip, &cond);
	if(rc==7){
		printf("all good\n");
	}
	else{
		printf("no good\n");
	}
}