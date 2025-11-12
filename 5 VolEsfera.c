#include <stdio.h>
#include <stdlib.h>

int volumeEsf(int raio)

int main()
{
    int raio;
    int volumeFinal;

    printf("coloque o valor do raio(em cm):");
    scanf("%d", &raio);

    volumeFinal = volumeEsf(raio);

    printf("o volume da esfera eh:%d cm^3\n", volumeFinal);

    return 0;

}

int volumeEsf(int raio)
{
    int vol;
    int pi = 3;

    vol = (4 * pi * (raio * raio * raio)) / 3;
    return vol;
}
