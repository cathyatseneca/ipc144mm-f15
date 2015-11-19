struct Dog{
	char name_[20];
	int age_;
};

int main(void){
	//mowgli is an instance of Dog
	struct Dog mowgli;
	strcpy(mowgli.name_,"Mowgli");
	mowgli.age_=8;
	struct Dog frodo;
	strcpy(frodo.name_,"Frodo");
	frodo.age_=6;
}