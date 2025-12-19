#include <stdio.h>
#include "conversor.h"
// tinoco, me desculpa, mas eu não sei o que tá dando errado aqui, toda vez que eu compilo o resultado dá errado, já tô a mais de 1 hora tentando
int main()
{
    float temp;
    int conv;

    printf("insira uma temperatura:\n");
    scanf("%f", &temp);

    printf("agora,escolha qual conversao voce quer fazer:\n");

    printf("1 - converter celsius para fahrenheit\n 2 - converter fahrenheit para celsius\n 0 - sair\n");
    scanf("%d", &conv);

    if(conv == 1)
    {
        printf("%f", celsius_fahrenheit(temp));
    }
    else if(conv == 2)
    {
        printf("%f", fahrenheit_celsius(temp));
    }
    else if(conv == 0)
    {
        printf("saindo do programa\n");
    }
    else
    {
        printf("entrada invalida\n");
    }

    return 0;
}