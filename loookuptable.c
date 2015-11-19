#include <stdio.h>
const char weekdayName[7][10]={
	"Monday","Tuesday","Wednesday","Thursday",
	"Friday","Saturday","Sunday"
};

int main(void){
	int userInput;
	printf("please enter a day of week (1-7, 1 is Monday): ");
	scanf("%d",&userInput);
	printf("you entered %s\n",weekdayName[userInput-1]);
}