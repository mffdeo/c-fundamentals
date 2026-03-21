#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char descricao[100];
} Tarefa;


int main() {
    // Alocar 3 tarefas
    Tarefa *tarefa = (Tarefa *) malloc(3*sizeof(Tarefa));

    if (tarefa == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }

    tarefa[0].id =1;
    tarefa[1].id =2;

    sprintf(tarefa[0].descricao, "Teste de tafera 1");
    sprintf(tarefa[1].descricao, "Teste de tafera 2");
    

    printf("ID-1: %d\n", tarefa[0].id);
    printf("Descricao-1: %s\n", tarefa[0].descricao);

    printf("ID-2: %d\n", tarefa[1].id);
    printf("Descricao-2: %s\n", tarefa[1].descricao);

    free(tarefa);

    return 0;
}