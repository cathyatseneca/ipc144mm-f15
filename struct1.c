struct Dog{
	char name_[20];
	int age_;
};

int main(void){
	//mowgli is an instance of Dog
	struct Dog mowgli;
	strcpy(mowgli.name_,"Mowgli");
	mowgli.age_=8;

	struct Dog allDogs[5];
	strcpy(allDogs[0].name_,"Frodo");
	allDogs[0].age_=6;

	allDogs[1]=mowgli;

}

//In C, structs can be very big.  So, instead of passing
//a copy of an entire struct into a function, you typically
//pass in just its address.

void printDog(const struct Dog* dogPtr){
	printf("%s - %d\n", dogPtr->name_,dogPtr->age_);
//dogPtr->name_ is the same as (*dogPtr).name_
}

void printInt(int* ptr){
	printf("%d\n", *ptr);
}
