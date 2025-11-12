#include <stdio.h>
#include <stdlib.h>

int numero(int num);

int main()
{
    int num;

    printf("digite um numero:\n");
    scanf("%d", &num);

    numero(num);

    return 0;
}

int numero(int num)
{
    if(num > 0)
    {
        printf("1\n");
    }
    else if(num < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return num;
}