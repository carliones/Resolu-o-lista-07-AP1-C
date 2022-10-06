#include <stdio.h>

int main()
{
    int x;
    
    printf("selecione o número para fazermos a tabuada: ");
    scanf("%d", &x);
    
    int i;
    int y;
    
    i = 1;
    while(i <= 10)
    
    {
        y = x * i;
        printf("%d * %d = %d \n", x, i, y);
        i++;
}
}
