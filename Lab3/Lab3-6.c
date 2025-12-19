#include <stdio.h>
#include <stdlib.h>

int sDobro(int *a, int *b);

int main()
{
    int num1;
    int num2;
    int soma;


    printf("insira o valor de dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    soma = sDobro(&num1, &num2);

    printf("%d, %d\n", num1, num2);
    printf("soma dos dobros: %d\n", soma);

    return 0;
}

int sDobro(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}