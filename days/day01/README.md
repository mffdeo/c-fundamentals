# 📘 Day 01 - Alocação Dinâmica com malloc

## 🧠 Objetivo

Neste primeiro dia, o objetivo foi compreender como funciona a **alocação dinâmica de memória em C**, utilizando a função `malloc`, além de manipular estruturas (`struct`) na prática.

---

## 📌 Conceitos Praticados

- Criação de `struct`
- Alocação dinâmica com `malloc`
- Verificação de erro de alocação (`NULL`)
- Manipulação de arrays de structs
- Uso de `sprintf` para strings
- Liberação de memória com `free`

---

## 🧱 Estrutura do Código

Foi criada uma estrutura chamada `Tarefa`:

```c
typedef struct {
    int id;
    char descricao[100];
} Tarefa;
```

O programa:

1. Aloca memória para 3 tarefas dinamicamente
2. Preenche manualmente 2 tarefas
3. Exibe os dados no terminal
4. Libera a memória ao final

---

## ▶️ Como Executar

```bash
gcc main.c -o programa
./programa
```

---

## 📌 Saída Esperada

```bash
ID-1: 1
Descricao-1: Teste de tarefa 1
ID-2: 2
Descricao-2: Teste de tarefa 2
```

---

## 🚀 Próximos Passos

- Adicionar entrada de dados com `scanf`
- Criar funções para manipulação de tarefas
- Evoluir para um sistema simples de cadastro

---

## 📎 Autor

Marcos Oliveira 👨‍💻