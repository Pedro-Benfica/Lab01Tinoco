#include <stdio.h>
#include <stdlib.h>

struct produto {
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
};

int main() {
    struct produto *produtos;
    int n;

    printf("quantos produtos deseja cadastrar?\n");
    scanf("%d", &n);

    produtos = (struct produto *) malloc(n * sizeof(struct produto));

    if (produtos == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nproduto %d\n", i + 1);

        printf("codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("nome: ");
        scanf("%s", produtos[i].nome);

        printf("quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);

        printf("preco: ");
        scanf("%f", &produtos[i].preco);
    }

    int idx_preco = 0, idx_qtd = 0;

    for (int i = 1; i < n; i++) {
        if (produtos[i].preco > produtos[idx_preco].preco)
            idx_preco = i;

        if (produtos[i].quantidade > produtos[idx_qtd].quantidade)
            idx_qtd = i;
    }

    printf("\nproduto com MAIOR PRECO:\n");
    printf("%s - R$ %.2f\n", produtos[idx_preco].nome, produtos[idx_preco].preco);

    printf("\nproduto com MAIOR QUANTIDADE:\n");
    printf("%s - %d unidades\n", produtos[idx_qtd].nome, produtos[idx_qtd].quantidade);

    free(produtos);
    return 0;
}