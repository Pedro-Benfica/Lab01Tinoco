#include <stdio.h>
#include <stdlib.h>

int maior(int num1, int num2)

int main()
{
    int num1, num2;

    printf("insira dois numeros inteiros:\n");
    scanf("%d%d", &num1, &num2);

    printf("o maior numero eh: %d\n", maior(num1, num2));
    return 0;
}

int maior(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}