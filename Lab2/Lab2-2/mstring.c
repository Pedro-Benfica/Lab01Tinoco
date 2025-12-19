#include <stdio.h>
#include "mstring.h"
#include <stdlib.h>

int mstrlen(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

void mstrcpy(char dest[], char orig[])
{
    int i;

    for(i=0; orig[i] != '\0'; i++)
    {
        dest[i]=orig[i];
    }
        dest[i] = '\0';

    return;
}

void mstrcat(char dest[], char orig[])
{
    int i;
    int j;

     for(i=0; dest[i] != '\0'; i++);

     for(i=0; orig[i] != '\0';j++, i++)
     {
        dest[i] = orig[j];
     }
        dest[i] = '\0';

    return;
}

int mstrcmp(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if((a[i] == b[i]) == 0 )
        {
            printf("As strings sao iguais");
        }
        else
        {
            printf("As strings sao diferentes");
        }
    }

    return 0;
}

void mstrupper(char s[])
{
    int i;

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i]<= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    return;
}

void mstrlower(char s[])
{
    int i;
   for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i]<= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return; 
}

int mcount_vogais(char s[])
{
    int i;
    int contador = 0;
    char v = s[i];

    for(i=0; s[i] != '\0'; i++)
    {
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o'|| v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O'|| v == 'U'  )
        {
            contador++;
        }
        return 0;
    }
}

int meh_palindromo(char s[])
 {
    int i;
    int j;

    for (i = 0, j = mstrlen(s) - 1; i < j; i++, j--)
    { 
        if (s[i] != s[j])
        {
            return 0;
        }
    } 
        return 1; 
    }

void mremove_espacos(char s[])
{
    int i;
    int j = 0;

    for(i=0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';

    return;
}