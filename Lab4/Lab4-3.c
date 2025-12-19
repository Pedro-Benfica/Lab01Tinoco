#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet, tam, i;
    int pares = 0, impares = 0;

    printf("digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    vet = (int *) malloc(tam * sizeof(int));

    if (vet == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    printf("digite os valores:\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("pares: %d\n", pares);
    printf("impares: %d\n", impares);

    free(vet);
    return 0;
}