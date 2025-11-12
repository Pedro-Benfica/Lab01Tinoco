#include <stdio.h>
#include <stdlib.h>

int somaAlgarismos(int num)

int main()
{
    int soma,num;

    printf("insira um numero inteiro positivo:\n");
    scanf("%d", &num);

    if(num<=0)
    {
        printf("numero invalido!\n");
    }
    else
    {
        soma = somaAlgarismos(num);

        printf("a soma dos algarismos eh: %d\n", soma);
    }

    return 0;
}

int somaAlgarismos(int num)
{
    int soma = 0;

    while(num>0)
    {
        soma += num % 10;
        num = num/10;
    }

    return soma;
}
