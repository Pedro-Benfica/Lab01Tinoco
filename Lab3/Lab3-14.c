#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *n1, float *n2);

void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada);


int main()
{
    float n1, n2;
    float mediaSimples, mediaPonderada;

    lerNotas(&n1, &n2);
    calcularMedias(n1, n2, &mediaSimples, &mediaPonderada);

    printf("media simples: %.2f\n", mediaSimples);
    printf("media ponderada: %.2f\n", mediaPonderada);

    return 0;
}

void lerNotas(float *n1, float *n2)
{
    do
    {
        printf("digite a primeira nota (0 a 10): ");
        scanf("%f", n1);
    } while (*n1 < 0 || *n1 > 10);

    do
    {
        printf("digite a segunda nota (0 a 10): ");
        scanf("%f", n2);
    } while (*n2 < 0 || *n2 > 10);
}

void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada)
{
    *mediaSimples = (n1 + n2) / 2;
    *mediaPonderada = (n1 + 2 * n2) / 3;
}
