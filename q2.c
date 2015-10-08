#include <stdio.h>

int main(void){
	int input;
	printf("enter a number: ");
	scanf("%d",&input);

	if(input%2 != 0){
	//if(input%2){
		printf("%d is odd\n");
		//printf("%d is not even\n")

	}
	else{
		printf("%d is not odd\n");
		printf("%d is even\n");
	}
	return 0;
}