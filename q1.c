#include <stdio.h>
int main(void){
	int input;
	int rounded;
	printf("enter a number: ");
	scanf("%d",&input);
	rounded = ((input-1)/100+1)*100;
	//rounded = ((input-1)/1000 +1)*1000;
	printf("%d rounded is %d\n", input,rounded);
	return 0;
}