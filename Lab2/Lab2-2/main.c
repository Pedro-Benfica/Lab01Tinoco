#include <stdio.h>
#include "mstring.h"
#include <stdlib.h>

int main()
{
    char str[30];

    printf("digite algo para a string\n");
    fgets(str,30,stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("%d\n", mstrlen(str));

    mstrlower(str);
    printf("%s\n", str);

    printf("%d\n", mcount_vogais(str));

    mremove_espacos(str);
    printf("%s\n", str);

    return 0;

}
