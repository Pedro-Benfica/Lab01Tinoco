#include <stdio.h>
#include <stdlib.h>

int operacao(int num1, int num2, char operador);

int main()
{
    int num1, num2;
    char operador;

    printf("insira dois numeros inteiros e o operador (+, -, *, /):\n");
    scanf("%d %d %c", &num1, &num2, &operador);

    printf("o resultado da operacao eh: %d\n", operacao(num1, num2, operador));

    return 0;
}

int operacao(int num1, int num2, char operador)
{
    switch (operador)
    {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else
            {
                printf("nao eh possivel dividir por zero\n");
                return 0;
            }
        default:
            printf("operador invalido\n");
            return 0;
    }
}