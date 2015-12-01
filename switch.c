#include <stdio.h>

int main(void){

	//this program will figure out if user entered
	//a,b,c, or d any case and print out what they entered
	char input;
	printf("enter a letter: ");
	scanf("%c",&input);

	switch(input){
		case 'A':
		case 'a': 	printf("its A\n");
					break;
		case 'B':
		case 'b': 	printf("its B\n");
					break;
		case 'C':
		case 'c': 	printf("its C\n");
					break;
		case 'D':
		case 'd':   printf("its D\n");
					break;
		default:
			printf("something else\n");
	}
}
