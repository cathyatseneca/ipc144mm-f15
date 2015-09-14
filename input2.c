/*this program asks the user to enter 2 numbers.  It 
will then echo the input and print out its sum*/

#include <stdio.h>
int main(void){
	int userInput1;
	int userInput2;
	printf("please enter a number: ");
	scanf("%d",&userInput1);
	printf("please enter another number: ");
	scanf("%d",&userInput2);
	printf("%d + %d = %d\n",userInput1,userInput2,
					userInput1+userInput2);
}
