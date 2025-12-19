#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet, N, X, i, cont = 0;

    printf("digite N:\n");
    scanf("%d", &N);

    vet = (int *) malloc(N * sizeof(int));

    if (vet == NULL) {
        printf("Erro\n");
        return 1;
    }

    printf("digite os valores:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }

    printf("digite X:\n");
    scanf("%d", &X);

    for (i = 0; i < N; i++) {
        if (vet[i] % X == 0)
            cont++;
    }

    printf("multiplos de %d: %d\n", X, cont);

    free(vet);
    return 0;
}