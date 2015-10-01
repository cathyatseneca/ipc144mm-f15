#include <stdio.h>
//printStars is the name of the function
//numStars is the parameter
//the function returns nothing
void printStars(int numStars);

int main(void){
	int numToPrint;
	printf("enter how many stars to print: ");
	scanf("%d",&numToPrint);

	//a function call to printStars
	printStars(numToPrint);
	return 0;
}
void printStars(int numStars){
	int i;
	for(i=0;i<numStars;i++){
		printf("*");
	}
	printf("\n");

}


