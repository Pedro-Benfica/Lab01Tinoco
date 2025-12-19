#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet = NULL;
    int num, tam = 0;

    printf("digite numeros (negativo para parar):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0)
            break;
        vet = (int *) realloc(vet, (tam + 1) * sizeof(int));

        if (vet == NULL) {
            printf("erro de alocacao\n");
            return 1;
        }

        vet[tam] = num;
        tam++;
    }

    printf("numeros lidos:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    free(vet);
    return 0;
}