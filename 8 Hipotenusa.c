#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(int cat1, int cat2)

int main()
{
    int cat1, cat2;
    float h;

    printf("insira o valor do cateto 1: ");
    scanf("%d", &cat1);

    printf("insira o valor do cateto 2: ");
    scanf("%d", &cat2);

    h = hipotenusa(cat1, cat2);

    printf("o valor da hipotenusa eh: %0.2f\n", h);

    return 0;
}

float hipotenusa(int cat1, int cat2)
{
    float h;
    h = sqrt((cat1 * cat1) + (cat2 * cat2));
    return h;
}