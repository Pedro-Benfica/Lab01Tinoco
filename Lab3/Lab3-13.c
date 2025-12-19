#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float raio;
    float area, volume;

    printf("digite o raio da esfera:\n");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("area da esfera: %.2f\n", area);
    printf("volume da esfera: %.2f\n", volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * PI * R * R;
    *volume = (4.0 / 3.0) * PI * R * R * R;
}
