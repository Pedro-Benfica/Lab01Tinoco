#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

int main()
{
    int a;
    int b;
    char operador;

    printf("insira dois numeros inteiros\n");
    scanf("%d%d", &a,&b);

    printf("agora, insira um operador matematico(+,-,*,/)\n");
    scanf(" %c", &operador);

    if(operador == '+')
    {
        printf("%d", soma(a,b));
    }
    else if(operador == '-')
    {
        printf("%d", subtrai(a,b));
    }
    else if(operador == '*')
    {
        printf("%d", multiplica(a,b));
    }
    else if(operador == '/')
    {
        printf("%d", divide(a,b));
    }
    else
    {
        printf("operador invalido");
    }
   return 0; 
}
