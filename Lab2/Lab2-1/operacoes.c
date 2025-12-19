#include "operacoes.h"
#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int subtrai(int a, int b)
{
    return a - b;
}

int multiplica(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
        else
        {
            printf("nao eh possivel dividir por zero\n");
            return 0;
        }
    
}