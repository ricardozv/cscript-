#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    //imprime o cabeçalho do nosso jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");

    int segundos = time(0);
    srand (segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;

    int chute;

    int ganhou =0;

    int  tentativas = 1;

    int pontos = 1000;

    while (ganhou == 0){
    printf("tentativa %d \n", tentativas);    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("O seu chute foi: %d \n", chute);

    if (chute<0){
        printf("voce não pode chutar numero negativo \n");

    continue;

    }


    if (chute==numerosecreto) {
        printf ("Parabéns!! Corra para loteria, porque hj vc está com sorte\n");

        ganhou=1;
        }        
        else {
            if (chute < numerosecreto) {
            printf ("Quase! Tente um número maior!\n");
        }
            if (chute > numerosecreto) {
                printf ("Quase! Tente um número menor\n");
            }
    }
    tentativas = tentativas + 1;

    double pontosperdidos;
    pontosperdidos = abs (chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
    }

         printf ("Fim de jogo\n");
         printf ("voce acertou em %d tentativas \n", tentativas - 1);
         printf("total de pontos = %.2f \n", pontos);
}