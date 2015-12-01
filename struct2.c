#include <stdio.h>

struct Example{
	int dog_;
	char cat_;
};
void print(struct Example*);

int main(void){
	int array[5]={1,3,5,7,9};
	struct Example first={5,'d'};
	struct Example arrayOfExamples[3]={ {5,'A'},{1,'C'},{3,'G'}};
	print(&first);
	int i;
	for(i=0;i<3;i++){
		print(&arrayOfExamples[i]);
	}
}
void print(struct Example* data){
	printf("dog: %d cat:%c \n",data->dog_,data->cat_);
	//Equivalent to above but please do not code like this
	//YUCK!
	//printf("dog: %d cat:%c \n",(*data).dog_,(*data).cat_)
}
void sort(struct Example array[],int sz){
        int i, j;
         struct Example temp;

         for (i = n - 1; i > 0; i--) {
                 for (j = 0; j < i; j++) {
                         if (array[j].dog_ > array[j+1].dog_) {
                                 temp = array[j];
                                 array[j] = array[j+1];
                                 array[j+1] = temp;
                         }
                 }
         }


}







