#include <stdio.h>
#include "pessoa.h"
#include <string.h>

Pessoa criarPessoa(char nome[], int idade)
{
    Pessoa p;
    strcpy(p.nome, nome);
    p.idade = idade;
    return p;
}

void mostrarPessoa(Pessoa p)
{
    printf("nome: %s\n", p.nome);
    printf("idade: %d\n", p.idade);
}