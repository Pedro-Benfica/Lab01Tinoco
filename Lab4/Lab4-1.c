#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int i;

    vet = (int *) malloc(5 * sizeof(int));

    if (vet == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    printf("eigite 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }

    printf("numeros digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }

    free(vet);

    return 0;
}