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
        printf("%d\n", *(vet + i) * 2);
    }

    return 0;
}