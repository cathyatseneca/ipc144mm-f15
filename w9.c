// Fraction Simplifier
 // w9.c

 #include <stdio.h>

 // insert Fraction declaration first

 // insert function prototypes here

 int main(void)
 {
         struct Fraction f;

         printf("Fraction Simplifier\n");
         printf("===================\n");

         enter(&f);
         simplify(&f);
         display(&f);
 }
