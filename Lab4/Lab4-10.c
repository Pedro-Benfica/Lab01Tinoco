#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double *vet;
    int tam;

    printf("quantos valores deseja armazenar (>=10)?\n");
    scanf("%d", &tam);

    if (tam < 10) {
        printf("o tamanho deve ser no minimo 10\n");
        return 1;
    }

    vet = (double *) malloc(tam * sizeof(double));

    if (vet == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        vet[i] = rand() % 101;
    }

    printf("10 primeiros valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", vet[i]);
    }

    free(vet);
    return 0;
}
