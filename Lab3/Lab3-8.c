#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float vet[10];

    for(i = 0; i < 10; i++)
    {
        printf("%p,", (void*)&vet[i]);
    }
}