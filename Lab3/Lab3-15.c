#include <stdio.h>
#include <math.h>


int raizes(float A, float B, float C, float *X1, float *X2);

int main()
{
    float A, B, C;
    float x1, x2;
    int resultado;

    printf("digite os valores de A, B e C:\n");
    scanf("%f %f %f", &A, &B, &C);

    resultado = raizes(A, B, C, &x1, &x2);

    if (resultado == 0)
    {
        printf("nao existem raizes reais.\n");
    }
    else if (resultado == 1)
    {
        printf("existe uma raiz real: X = %.2f\n", x1);
    }
    else
    {
        printf("existem duas raizes reais:\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    float delta;
    if (A == 0)
    {
        return 0;
    }

    delta = B * B - 4 * A * C;

    if (delta < 0)
    {
        return 0;
    }

    else if (delta == 0)
    {
        *X1 = -B / (2 * A);
        return 1;
    }

    else
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}