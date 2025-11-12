#include <stdio.h>
#include <stdlib.h>

int quadrado(int qua);

int main()
{
    int qua;
    
    printf("insira um numero para a verificacao:\n");
    scanf("%d", &qua);

    if(quadrado(qua))
    {
        printf("o numero %d eh um quadardo perfeito\n", qua);
    }
    else
    {
        printf("o numero %d nao eh um quadrado perfeito\n", qua);
    }

    return 0;
}

int quadrado(int qua)
{

    int i = 0;

    if(qua < 0)
    {
        return 0;
    }

    
    while(i * i < qua)
    {
        i++;
    }

    if(i * i == qua)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}