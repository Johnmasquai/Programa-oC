#include <stdio.h>

void moverRainha(int casas) {
    if (casas > 0){
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

void moverTorre(int casas){
    if (casas > 0){
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void Bispo(int casas){
    if (casas > 0){
        printf("Cima, ");
        Bispo(casas - 1);
    }
}

int main(){

    int bispo, cavalo;

    printf("Rainha\n");
    //mover a rainha 8 casas para a esquerda
    moverRainha(8);

    printf("\n");

    printf("Bispo\n");
    //mover bispo 5 casas para diagonal cima, direita
    bispo = 0;
    while (bispo < 5)
    {
        Bispo(1);
        for (int bispo = 0; bispo < 1; bispo++){
            printf("Direita\n");
        }
        bispo++;
    }
    
    printf("\n");

    printf("Torre\n");
    //mover torre 5 casas para direita
    moverTorre(5);

    printf("\n");

    printf("Cavalo\n");
    //movimentação da peça cavalo saindo da posição inicial
    cavalo = 0;
    while (cavalo < 1)
    {
        for (int i = 0, j = 2; i < 1 && j > 1; i++, j--)
        {
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }

       cavalo++; 
    }
    
    
    return 0;
}