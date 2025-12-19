#include <stdio.h>
#include <stdlib.h>

int trocar(int *a, int *b);

int main()
{
    int num1;
    int num2;


    printf("insira o valor de dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    trocar(&num1,&num2);

    printf("o valor trocado dos dois numeros eh: %d , %d", num1, num2);

    return 0;
}

int trocar(int *a, int *b)
{
   int v;

   v = *a;
   *a = *b;
   *b = v;


}