#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac);


int main()
{
    float num;
    int inteiro;
    float fracionaria;

    printf("digite um numero real:\n");
    scanf("%f", &num);

    frac(num, &inteiro, &fracionaria);

    printf("parte inteira: %d\n", inteiro);
    printf("parte fracionaria: %f\n", fracionaria);

    return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int) num;  
    *frac = num - *inteiro;
}