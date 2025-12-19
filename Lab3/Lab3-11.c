#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int i;
    int vet[5];

    printf("Insira os 5 numeros do vetor:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("os enderecos pares de vet[%d]:  %p\n",i, (void*)&vet[i]);
        }
    }

    return 0;
}