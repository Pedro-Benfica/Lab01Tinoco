#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("insira dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if(&num1 > &num2)
    {
        printf("numero: %d\nendereco de memoria: %d", num1, &num1);
    }
    else
    {
        printf("numero: %d\nendereco de memoria: %d", num2, &num2);
    }
    return 0;
    }