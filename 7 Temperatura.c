#include <stdio.h>
#include <stdlib.h>

int tempF(int cels)

int main()
{
    int cels, fahr;

    printf("insira a temperatura em celsius: ");
    scanf("%d", &cels);

    fahr = tempF(cels);

    printf("a temperatura em fahrenheit eh: %d\n", fahr);

    return 0;
}

int tempF(int cels)
{
    int fahr = cels * (9.0 / 5.0) + 32;
    return fahr;
}  