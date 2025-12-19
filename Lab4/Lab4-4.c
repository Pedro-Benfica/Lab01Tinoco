#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int tam, i, j = 0;

    printf("digite o tamanho da string:\n");
    scanf("%d", &tam);
    getchar(); // limpa o buffer

    str = (char *) malloc((tam + 1) * sizeof(char));

    if (str == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    printf("digite a string:\n");
    fgets(str, tam + 1, stdin);

    // remover vogais
    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
              str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("string sem vogais: %s\n", str);

    free(str);
    return 0;
}