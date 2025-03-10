#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome);
    printf("Digite o número de faltas: ");
    scanf("%d", &aluno->faltas);
    printf("Digite a nota: ");
    scanf("%f", &aluno->nota);
    printf("Aluno: %s, Faltas: %d, Nota: %.2f\n", aluno->nome, aluno->faltas, aluno->nota);
    free(aluno);
    return 0;
}