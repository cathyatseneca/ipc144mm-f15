#include <stdio.h>
#include <string.h>

int main(void){
	char ch = 'a';
	char str[5]= "a";

	printf("%c\n",ch);
	printf("%s\n",str);
	printf("str is %ld characters long\n",strlen(str));

	ch = 'b';
	/*this line does not compile
	str = "b";	*/
	strcpy(str,"abc");

	printf("%c\n",ch);
	printf("%s\n",str);
	printf("str is %ld characters long\n",strlen(str));

}
void f1(char* str){
	
}






