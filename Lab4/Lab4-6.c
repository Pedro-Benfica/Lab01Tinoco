#include <stdio.h>
#include <stdlib.h>

int main() {
    int *mem;
    int bytes, pos, valor, opcao;

    printf("digite o tamanho da memoria (multiplo de %ld):\n", sizeof(int));
    scanf("%d", &bytes);

    mem = (int *) calloc(bytes / sizeof(int), sizeof(int));

    if (mem == NULL) {
        printf("erro\n");
        return 1;
    }

    printf("1 - inserir valor\n2 - consultar valor\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("posicao e valor:\n");
        scanf("%d %d", &pos, &valor);
        mem[pos] = valor;
    } else if (opcao == 2) {
        printf("posicao:\n");
        scanf("%d", &pos);
        printf("valor: %d\n", mem[pos]);
    }

    free(mem);
    return 0;
}