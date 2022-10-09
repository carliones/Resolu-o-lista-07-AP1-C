#include <stdio.h>

int main()
{
    int x;
   printf("digite um número: ");
   scanf("%d", &x);
   
   int i;
   int y;
   y = x - 1;
   int w;
   i = 1; 
   while(i == 1)
   {
       w = x % y;
       
       if ( w == 0) 
       {
           i = 0;
           printf("o número não é primo");
       }
       if ((w != 0) && (y == 2))
       {
           printf(" o número é primo");
           i = 0;
           
       }
       
       y--;
   }
