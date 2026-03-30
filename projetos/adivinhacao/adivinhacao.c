#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");

    int numeroSecreto;
    // Gera um número aleatório ate 100;
    numeroSecreto = rand() % 100;
    int chute;
    
    printf("Qual o seu chute?\n");
    scanf("%d", &chute);

    if(chute == numeroSecreto){
        printf("Parabéns, voce acertou\n");
    }else{
        if(chute > numeroSecreto){
            printf("Seu chute foi maior que o numero secreto\n");
        }else{
            printf("Seu chute foi menor que o numero secreto\n");   
        }
    }

    return 0;
}