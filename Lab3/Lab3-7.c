#include <stdio.h>
#include <stdlib.h>

void numInte(int *a, int *b);

int main()
{   
    int num1;
    int num2;


    printf("insira o valor de dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

   numInte(&num1, &num2);

    printf("%d, %d\n", num1,num2);

}   

void numInte(int *a, int *b)
{
    *a =  *a + *b;
}