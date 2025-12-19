#include <stdio.h>
#include <stdlib.h>

int maior(int *a,int *b);

int main()
{
    int num1;
    int num2;


    printf("insira o valor de dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    maior(&num1, &num2);

    printf("%d, %d", num1, num2);

}


int maior(int *a, int *b)
{
    int v;

    if(*a <*b)
    {
       v = *a;
       *a = *b;
       *b = v;
    }
}