#include <stdio.h>
#include <stdlib.h>

int economia(int distancia,int litros);

int main()
{
    int distancia,litros,kmL;

    printf("insira a distancia em km, e a quantidade de litros que o carro consumiu\n");
    scanf("%d%d", &distancia, &litros);

    kmL = economia(distancia, litros);
    printf("o consumo do carro eh de %d Km/L\n", kmL);
    return 0;
}

int economia(int distancia,int litros)
{
    int kmL;
    kmL = distancia/litros;
    if(kmL<8)
    {
        printf("venda o carro!\n");
    }
    else if(kmL>=8 && kmL<=14)
    {
        printf("economico!\n");
    }
    else
    {
        printf("super economico!\n");
    }
    return kmL;
}