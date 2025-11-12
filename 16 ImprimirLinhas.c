#include <stdio.h>
#include <stdlib.h>

int desenha_linha( int qtdLinhas);

int main()
{
    int linhas;

    printf("insira a quantidade de linhas que serao mostradas:\n");
    scanf("%d", &linhas);

    desenha_linha(linhas);

    return 0;
}

int desenha_linha(qtdLinhas)
{
    int i;
    for(i=0; i<qtdLinhas; i++)
    {
        printf("=");
    }
    return 0;
}