#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("qual é o valor da base?: ");
    scanf("%d", &x);
    printf("qual é o valor do expoente?: ");
    scanf("%d", &y);
    
    while(y > 1)
    {
        x *= x;
        y--;
    }
    printf("o resultado é %d ", x);
}
