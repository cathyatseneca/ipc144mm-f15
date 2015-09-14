/*This program will ask the user to enter a whole 
number and it will then print that number back*/

#include <stdio.h>
int main(void){
	int userInput;

	printf("please enter a number: ");
	scanf("%d",&userInput);
	printf("The number you entered was %d\n",userInput);
	return 0;

}
