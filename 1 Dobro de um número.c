#include <stdio.h>
#include <stdlib.h>

int dobro(int valor);

int main()
{
    int num;
    printf("digite um numero: \n");
    scanf("%d", &num);

    printf("o dobro de %d eh %d\n", num, dobro(num));
    return 0;
}

int dobro(int valor)
{
    return valor * 2;
}
