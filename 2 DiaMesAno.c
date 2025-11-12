#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dia, mes, ano;

    printf("digite o dia:\n digite o mes:\n digite o ano:\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    data(dia, mes, ano);

    return 0;
}

void data(int dia, int mes, int ano)
{
    char meses[12][20] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    }; 

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);

    return;
}