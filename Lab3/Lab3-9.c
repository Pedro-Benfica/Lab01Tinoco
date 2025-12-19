#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    float mat[3][3];

    for(i = 0; i < 3; i++ )
    {
        for(j = 0; j < 3; j++)
        {
            printf("%p,", (void*)&mat[i][j]);
        }
    }
}