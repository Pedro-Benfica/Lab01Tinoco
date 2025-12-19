#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet, tam, i;

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
    }

    printf("vetor:\n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    free(vet);
    return 0;
}