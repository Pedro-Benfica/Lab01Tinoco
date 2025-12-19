#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet;
    int i, zeros = 0;

    vet = (int *) calloc(1500, sizeof(int));

    if (vet == NULL) {
        printf("erro\n");
        return 1;
    }

    for (i = 0; i < 1500; i++) {
        if (vet[i] == 0)
            zeros++;
        vet[i] = i;
    }

    printf("zeros: %d\n", zeros);

    printf("primeiros 10:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", vet[i]);

    printf("\nultimos 10:\n");
    for (i = 1490; i < 1500; i++)
        printf("%d ", vet[i]);

    free(vet);
    return 0;
}