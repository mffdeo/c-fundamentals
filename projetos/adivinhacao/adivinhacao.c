#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int numeroSecreto;
    // Gera um número aleatório ate 100;
    int segundos = time(0);
    srand(segundos);
    numeroSecreto = rand() % 100;
    int chute;
    int ganhou = 0;

    int pontos = 1000;
    int nivel;
    int totaldetentativas;
    int acertou=0;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");


    scanf("%d", &nivel);
    if(nivel == 1) {
        totaldetentativas = 20;
    } else if (nivel == 2) {
        totaldetentativas = 15;
    } else {
        totaldetentativas = 6;
    }

    for(int i = 1; i <= totaldetentativas; i++) {
        printf("Tentativa %d de %d\n", i, totaldetentativas);
        printf("Qual o seu chute?\n");
        scanf("%d", &chute);
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }
    // ...
        acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        if(acertou) {
            break;
        }else if(maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
        } else {
        printf("Seu chute foi menor do que o número secreto!\n");
        }
        pontos = pontos - (abs(chute - numeroSecreto))/2;
    }

    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %d pontos. Até a próxima!\n\n", pontos);
    } else {
 
        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");
 
        printf("\nVocê perdeu! Tente novamente!\n\n");
    }
    return 0;
}


 