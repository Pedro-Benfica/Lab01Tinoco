#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1;
    int *p2;

    printf("endereco da variavel p1: %d\n", &p1);
    printf("endereco da variavel p2: %d\n", &p2);

    if(&p1 > &p2)
    {
        printf("%d", &p1);
    }
    else
    {
        printf("%d", &p2);
    }

    return 0;

}