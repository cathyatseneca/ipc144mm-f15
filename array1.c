#include <stdio.h>

void addToIdx(int array[], int idx);
int main(void){
	int myarray[5]={5,10,1,2,9};
	int index=2;
	int i;
	addToIdx(myarray,index);
	for(i=0;i<5;i++){
		printf("%d\n",myarray[i]);
	}
	printf("%d\n",index);
	return 0;
}
void addToIdx(int array[],int idx){
	array[idx]=array[idx] + 1;
	idx++;
}
