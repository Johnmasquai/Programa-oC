#include <stdio.h>

int main(){

    int torre, rainha, bispo;

    printf("Rainha\n");
    //mover a rainha 8 casas para a esquerda
    for (rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");//para onde está se movimentando
    }

    printf("\n");

    printf("Bispo\n");
    //mover bispo 5 casas para diagonal cima, direita
    do {
        printf("Cima, Direita\n");//para onde está se movimentando
        bispo++;
    } while (bispo < 5);

    printf("\n");

    printf("Torre\n");
    //mover torre 5 casas para direita
    torre = 0;
    while (torre < 5)
    {
        printf("Direita\n");//para onde está se movimentando
        torre++;
    }
    
    return 0;
}