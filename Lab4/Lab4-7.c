#include <stdio.h>
#include <stdlib.h>

int main() {
    int sorteio[6], bilhete[6];
    int *acertos;
    int i, cont = 0;

    printf("digite os 6 numeros sorteados:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &sorteio[i]);

    printf("digite seus 6 numeros:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &bilhete[i]);

    acertos = (int *) malloc(6 * sizeof(int));

    for (i = 0; i < 6; i++) {
        if (sorteio[i] == bilhete[i]) {
            acertos[cont++] = sorteio[i];
        }
    }

    printf("acertos (%d): ", cont);
    for (i = 0; i < cont; i++)
        printf("%d ", acertos[i]);

    free(acertos);
    return 0;
}