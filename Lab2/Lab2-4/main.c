#include <stdio.h>
#include "pessoa.h"
#include <string.h>

int main()
{
    Pessoa p;
    char nome[50];
    int idade;

    printf("insira seu nome e sua idade:\n");
    fgets(nome, 50, stdin);
    scanf("%d", &idade);

    p = criarPessoa(nome, idade);
    
    mostrarPessoa(p);

    return 0;
}
