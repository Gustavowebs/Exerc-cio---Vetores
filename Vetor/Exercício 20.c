#include <stdio.h>
#include <stdlib.h>

#define NUM_ALUNOS 100

typedef struct {
    int matricula;
    float media;
} Aluno;

void swap(Aluno *a, Aluno *b) {
    Aluno temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarAlunos(Aluno alunos[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (alunos[j].media < alunos[j + 1].media) {
                swap(&alunos[j], &alunos[j + 1]);
            }
        }
    }
}
int main() {
    Aluno alunos[NUM_ALUNOS];
    int i;

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite a media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }

    ordenarAlunos(alunos, NUM_ALUNOS);

    printf("\nMatrículas e médias ordenadas:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Matricula: %d, Media: %.2f\n", alunos[i].matricula, alunos[i].media);
    }
}
