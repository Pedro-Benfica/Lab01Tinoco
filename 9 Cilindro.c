#include <stdio.h>
#include <stdlib.h>

int volumeCilindro(int raio, int altura)

int main()
{
    int raio, altura;
    float volume;

    printf("insira o valor do raio e da altura do cilindro:\n ");
    scanf("%d%d", &raio, &altura);

    volume = volumeCilindro(raio, altura);

    printf("O volume do cilindro eh: %.2f\n", volume);


    return 0;
}

int volumeCilindro(int raio, int altura)
{
    float volume = 3.141592 * (raio * raio) * altura;

    return volume;
}