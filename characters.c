

char toLower(char ch){
	char rc=ch;
	if(ch >= 'A' && ch <= 'Z'  ){
		int diff = 'a'-'A';
		rc=ch + diff;
	}
	return rc;
}

int main(void){

if(toLower(choice) == 'c'){
}

