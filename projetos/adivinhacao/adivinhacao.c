#include<stdio.h>
#include<stdlib.h>
//#define NUMERO_DE_TENTATIVAS 3
int main(){

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numeroSecreto;
    // Gera um número aleatório ate 100;
    numeroSecreto = rand() % 100;
    int chute;
    int ganhou = 0;
    int tentativas = 1;
    
    while (!ganhou)
    {
        printf("Qual o seu chute?\n");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        printf("Seu %do. chute foi %d\n", tentativas, chute);
        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        if(acertou) {
        printf("Parabéns! Você acertou!\n");
        ganhou = 1;
        } else if(maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
        } else {
        printf("Seu chute foi menor do que o número secreto!\n");
        }
        tentativas++;
    }
    
    printf("\nObrigado por jogar!\n");
    printf("Fim de jogo\n");
    return 0;
}