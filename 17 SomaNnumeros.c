#include <stdio.h>
#include <stdlib.h>

int soma_numeros(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Os numeros devem ser positivos!\n");
        return 0;
    }

    int resultado = soma_numeros(num1, num2); 
    printf("A soma dos numeros entre %d e %d eh: %d\n", num1, num2, resultado);

    return 0;
}

int soma_numeros(int num1, int num2)
{
    int soma = 0;

    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++)
    {
        soma += i;
    }

    return soma;
}