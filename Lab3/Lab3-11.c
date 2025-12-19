#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int tam = 5;
    int i;
    int vet[5];

    printf("Insira os 5 numeros do vetor:\n");

    for (i = 0; i < tam; i++)
    {
        scanf("%d", vet + i);
    }

    for (i = 0; i < 5; i++)
    {
        if((vet + i)%2 = 0)
        {
            printf("%d\n", (vet + i));
        }
        else
        {
            printf("o endereco de memoria nao eh par\n");
        }
    }

    return 0;
}
