# Day 03 — Cadastro e busca linear com medição de tempo

Pequeno programa em C que cadastra **5 pessoas** (nome, idade, e-mail e telefone), depois busca uma delas pelo **nome** com uma busca linear na memória e imprime o **tempo gasto** na busca usando `clock_gettime` (relógio monotônico).

## O que o programa faz

1. Para cada uma das 5 posições, lê do teclado: nome, idade, e-mail e telefone.
2. Pede um nome para buscar.
3. Percorre o vetor comparando strings com `strcmp` até encontrar a primeira ocorrência ou concluir que não existe.
4. Se encontrar, mostra índice, nome, idade, e-mail e telefone.
5. Mostra o tempo da busca em **nanosegundos** e **microsegundos** (apenas o trecho entre o início e o fim da busca).

A struct `tipo_pessoa` também reserva campos para endereço, cidade e estado; neste exercício eles não são lidos nem exibidos — servem como espaço para evoluir o cadastro depois.

## Requisitos

- Compilador C (GCC ou Clang).
- Ambiente **POSIX** (Linux, macOS, WSL etc.) para `clock_gettime` e `_POSIX_C_SOURCE`.

## Como compilar

```bash
gcc -std=c11 -Wall -Wextra -o programa main.c
```

## Como executar

```bash
./programa
```

Siga os prompts: para cada pessoa, informe nome, idade, e-mail e telefone; depois o nome a buscar.

**Observação:** `scanf` com `%s` lê uma **única palavra** por campo (sem espaços). Nomes ou e-mails com espaços exigiriam outra abordagem (por exemplo `fgets`).

## Estrutura do diretório

| Arquivo   | Descrição        |
|-----------|------------------|
| `main.c`  | Código-fonte       |
| `programa` | Binário (após compilar; não é obrigatório versionar) |

## Conceitos em prática

- Structs e vetores em C.
- Busca linear **O(n)** em memória.
- Medição de tempo de execução com `struct timespec` e `CLOCK_MONOTONIC` (não sofre ajustes de relógio do sistema).

---

Parte de um repositório de exercícios de fundamentos em C (`c-fundamentals`).
