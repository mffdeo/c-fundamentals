#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char descricao[100];
} Tarefa;


int main() {
    Tarefa *tarefa = (Tarefa *) malloc(sizeof(Tarefa));

    if (tarefa == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }

    tarefa->id = 1;
    sprintf(tarefa->descricao, "Estudar C novamente");

    printf("ID: %d\n", tarefa->id);
    printf("Descricao: %s\n", tarefa->descricao);

    free(tarefa);

    return 0;
}