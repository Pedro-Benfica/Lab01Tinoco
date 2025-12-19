#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    float num2 = 20;
    char p = 'A';

    int *p1;
    float *p2;
    char *pp;

    

    p1 = &num1;
    p2 = &num2;
    pp = &p;

    printf("variaveis antes da modificacao:\n %d ,%f , %c\n",*p1 ,*p2 ,*pp );


    *p1 = 0;
    *p2 = 3.14;
    *pp = 'B';


    printf("variaveis depois da modificacao:\n %d, %f, %c\n", num1 , num2 ,p );

    return 0;
}