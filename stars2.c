int main(void){
	int numToPrint;
	int i;
	printf("enter how many stars to print: ");
	scanf("%d",&numToPrint);
	//the loop counter is named i.
	//it is initialized to 0.
	for(i=0;i<numToPrint;i++){
		printf("*");
	}

	printf("\n");
	return 0;
}