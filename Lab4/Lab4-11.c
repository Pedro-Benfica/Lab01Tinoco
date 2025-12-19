#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
};

int main() {
    struct aluno *alunos;
    int n;

    printf("quantos alunos deseja cadastrar?\n");
    scanf("%d", &n);

    alunos = (struct aluno *) malloc(n * sizeof(struct aluno));

    if (alunos == NULL) {
        printf("erro de alocacao\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\naluno %d\n", i + 1);

        printf("matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("sobrenome: ");
        scanf("%s", alunos[i].sobrenome);

        printf("ano de nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }

    printf("\ndados cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("matricula: %d | Sobrenome: %s | Ano: %d\n",
               alunos[i].matricula,
               alunos[i].sobrenome,
               alunos[i].ano_nascimento);
    }

    free(alunos);
    return 0;
}