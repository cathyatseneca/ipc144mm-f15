#include <stdio.h>

int promptAndRead(const char* prompt,int min, int max);

int main(void){
	int numStars=promptAndRead("please enter a number of stars",0,80);
	while(numStars != 0){
		int i;
		for(i=0;i<numStars;i++){
			printf("*");
		}
		printf("\n");
		numStars=promptAndRead("please enter a number",0,80);
        }
}
int promptAndRead(const char* prompt, int min, int max){
	int input;
	printf("%s : ",prompt);   //prints the prompt
	scanf("%d",&input);
	while(input < min || input > max){
		printf("%d is invalid\n",input);
		printf("%s : ",prompt);   //prints the prompt
		scanf("%d",&input);
	}
	return input;
}
