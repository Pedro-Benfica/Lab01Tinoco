#include <stdio.h>
#include <stdlib.h>

int horario(int horas, int minutos, int segundos)

 int main()
    {
        int horas, minutos, segundos;
        int tempototal;

        printf("insira as horas, os minutos e os segundos, respectivamente:\n");
        scanf("%d %d %d", &horas, &minutos, &segundos);

        if(horas < 0 || minutos < 0 || segundos < 0 || minutos >= 60 || segundos >= 60)
        {
            printf("horario invalido\n");
            return 0;
        }
        tempototal = horario(horas, minutos, segundos);

        printf("o tempo total em segundos eh:%d segundos\n", tempototal);

        return 0;
    }

    int horario(int horas, int minutos, int segundos)
{
    int tempototal;

    tempototal = (horas * 3600) + (minutos * 60) + segundos;
    
    return tempototal;

   
}