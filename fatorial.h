#include <stdio.h>

int main()

{
int x;
int z;

z = 1;

   printf("informe os valores de n ");
   scanf("%d", &x);
   for (x ; x > 1 ; x--)
   {
    z*= x;
    
   }
   printf("o fatorial desse número é %d", z);
}
