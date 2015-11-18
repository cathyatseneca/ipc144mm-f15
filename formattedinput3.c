#include <stdio.h>

 int  clear(void)
 {	int rc=0;
         while (getchar() != '\n'){
		rc++;
          }
 }
int main(void){
   int a,b;
   char c;
   int rc;
   printf("prompt: "); 
   rc = scanf("%d, %d, %c",&a,&b,&c);
   int rc2=clear();
   while(rc != 3 || rc2 > 0){
	   printf("prompt: "); 
   	   rc=scanf("%d, %d, %c",&a,&b,&c);
   }
   printf("%d %d %c\n",a,b,c);
}
