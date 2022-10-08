#include <stdio.h>

int main()
{
    int x;
    int y;
   printf("insira o primeiro termo da PA");
   scanf("%d", &x);
   printf("\n insira a razão da PA");
   scanf("%d", &y);
   int p;
   p = 1;
   int w;
   w = 1;
   while (p <= 6)
   {
   w = x + (p - 1 ) * y;
   printf("\n %d", w);
   p++;
   }
}
