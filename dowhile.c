#include <stdio.h>

int main(void){

	//this program will figure out if user entered
	//a,b,c, or d any case and print out what they entered
	char input;
	do{
		printf("enter a letter: ");
		scanf(" %c",&input);
	}while(input != 'a');
	printf("you entered: %c\n",input);
}
