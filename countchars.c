
//this function returns the number of characters in string
//that matches letter.  A match is when the letter is exactly
//the same for non-alphabetic characters or if it is
//the same letter (case does not matter) for alphabetic
//for example:  
//countChar("Glunk! glunk! went the little green frog!", 'g'); --> 4
//countChar("Glunk! glunk! went the little green frog!", '!'); --> 3
int countChar(const char string[], char letter){
	int rc=0;
	int i;
	int size=strlen(string);
	for(i=0;i<size;i++){
		if(letter >='a' && letter <= 'z'){
			rc++;
		}

	}
}
int countChar(const char string[], char letter){
	int rc=0;
	int i;

	for(i=0;string[i]!='\0';i++){

	}
}