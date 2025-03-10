#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL;

int main() {
    aluno_t *novo = (aluno_t *)malloc(sizeof(aluno_t));
    printf("Digite o nome do aluno: ");
    scanf("%s", novo->nome);
    printf("Digite o número de faltas: ");
    scanf("%d", &novo->faltas);
    printf("Digite a nota: ");
    scanf("%f", &novo->nota);
    novo->prox = NULL;
    aluno_root = novo;
    printf("Aluno: %s, Faltas: %d, Nota: %.2f\n", novo->nome, novo->faltas, novo->nota);
    free(novo);
    return 0;
}
