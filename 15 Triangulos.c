#include <stdio.h>
#include <stdlib.h>

int triangulo( int lado1, int lado2, int lado3);
int tipoTriangulo(int lado1, int lado2, int lado3);

int main()
{
    int lado1, lado2, lado3;

    printf("digite os tres lados do triangulo:\n");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    if(triangulo(lado1, lado2, lado3))
    {
        printf("os lados formam um triangulo\n");
        tipoTriangulo(lado1, lado2, lado3);
    }
    else
    {
        printf("os lados nao formam um triangulo\n");
    }
    return 0;
}

int triangulo(int lado1, int lado2, int lado3)
{
    if(lado1<lado2+lado3 && lado2<lado3+lado1 && lado3<lado1+lado2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int tipoTriangulo(int lado1, int lado2, int lado3)
{
    if(lado1==lado2 && lado2==lado3)
    {
        printf("o triangulo eh equilatero\n");
    }
    else if(lado1==lado2 || lado2==lado3 || lado3==lado1)
    {
        printf("o triangulo eh isosceles\n");
    }
    else
    {
        printf("o triangulo eh escaleno\n");
    }
    return 0;
}