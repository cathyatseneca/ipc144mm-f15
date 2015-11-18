#include <stdio.h>

void addToIdx(int* array, int idx);
int main(void){
	int myarray[50]={5,10,1,2,9};
	int index=2;
	int i;
	addToIdx(myarray,index);
	for(i=0;i<5;i++){
		printf("%d\n",myarray[i]);
	}
	printf("%d\n",index);
	printf("sizeof index %d\n", sizeof(index));
	printf("sizeof myarray %d\n", sizeof(myarray));
	return 0;
}
void addToIdx(int* array,int idx){
	printf("sizeof array in function %d\n", sizeof(array));
	array[idx]=array[idx] + 1;
	idx++;
}
