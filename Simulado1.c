#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ramos(int qRamos);

int main()
{
    int nRamos;

    printf("digite o numero de ramos:\n");
    scanf("%d", &nRamos);

    if(ramos(nRamos))
    {
        printf("arvore impressa com sucesso\n");
    }
    else
    {
        printf("erro ao imprimir a arvore");
    }
}

int ramos(int nRamos)
{
    int qtd;
    char letra;
    int i;
    int j;

     if(nRamos <= 0 || nRamos > 26)
     {
        return 0;
     }

    // laco externo, controla as linhas 
     for(i = 1; i <= nRamos; i++)
     {
        letra = 'A' + (i - 1);
        qtd = 2 * i - 1 ;
     

     for(j = 0; j < qtd; j++)
     {
        printf("%c", letra);
        
     }
        printf("\n");
     }
     return 1;
}