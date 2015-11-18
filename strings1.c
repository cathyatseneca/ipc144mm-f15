#include <stdio.h>
#include <string.h>
void workWithStrings(char* s);
int main(void){
   char ch = 'a';
   char str[7]="123456";
   printf("%c\n",ch);
   printf("%s\n",str);

   ch = 'b';
   printf("%c\n",ch);
  /*think about this as str="abc"*/
   strcpy(str, "abc");
   printf("%s\n",str);

   workWithStrings(str);
   printf("%s\n",str);

   int length = strlen(str);
    printf("%d\n",length);
    printf("strcmp(apple, cat)==> %d\n",strcmp("apple","cat"));
    printf("strcmp(cat, cat)==> %d\n",strcmp("cat","cat"));
    printf("strcmp(cat, apple)==> %d\n",strcmp("cat","apple"));
    
     strcpy(str,"abc");
     strcat(str,"ghi");
   printf("%s\n",str);
}

void workWithStrings(char* s){
	strcpy(s,"ghi");

}
