#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct tipo_pessoa {
  char nome[100];
  int idade;
  char email[100];
  char telefone[100];
  char endereco[100];
  char cidade[100];
  char estado[100];
} tipo_pessoa;

static long diff_ns(struct timespec a, struct timespec b) {
  return (b.tv_sec - a.tv_sec) * 1000000000L + (b.tv_nsec - a.tv_nsec);
}

int main(void) {
  tipo_pessoa pessoa[5];
  for (int i = 0; i < 5; i++) {
    printf("Digite o nome da pessoa %d: ", i + 1);
    scanf("%99s", pessoa[i].nome);
    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%d", &pessoa[i].idade);
    printf("Digite o email da pessoa %d: ", i + 1);
    scanf("%99s", pessoa[i].email);
    printf("Digite o telefone da pessoa %d: ", i + 1);
    scanf("%99s", pessoa[i].telefone);
  }

  char busca[100];
  printf("\nNome para buscar: ");
  scanf("%99s", busca);

  struct timespec t0, t1;
  clock_gettime(CLOCK_MONOTONIC, &t0);

  int indice = -1;
  for (int i = 0; i < 5; i++) {
    if (strcmp(pessoa[i].nome, busca) == 0) {
      indice = i;
      break;
    }
  }

  clock_gettime(CLOCK_MONOTONIC, &t1);
  long ns = diff_ns(t0, t1);

  if (indice >= 0) {
    printf("Encontrado na posicao %d: %s, %d anos, %s, %s\n", indice,
           pessoa[indice].nome, pessoa[indice].idade, pessoa[indice].email,
           pessoa[indice].telefone);
  } else {
    printf("Pessoa nao encontrada.\n");
  }
  printf("Tempo da busca: %ld ns (%.3f us)\n", ns, ns / 1000.0);

  return 0;
}
