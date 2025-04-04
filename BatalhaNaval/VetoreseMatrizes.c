#include <stdio.h>

int main(){

    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {1,2,3,4,5,6,7,8,9,10};
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);//imprimir as letras
    }

    for (int i = 0; i < 10; i++){
        printf("\n");
        if (i <= 8 ){
            printf(" ");
        }
        printf("%d",linha[i]);
        printf(" ");
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[j][i]);
        }
        
    }

    printf("\n");
    printf("\n");

    printf(" TABULEIRO BATALHA NAVAL \n");//com as posiçoes dos navios
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);//imprimir as letras
    }

    for (int i = 4; i < 8; i++){
        for (int j = 1; j < 9; j++){
            if (j - i == 2){
            tabuleiro[j][i] = 3;
            }
        }
    }

    for (int i = 4; i < 10; i++){
        for (int j = 1; j < 10; j++){
            if (i + j == 7){
            tabuleiro[j][i] = 3;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        printf("\n");
        if (i <= 8 ){
            printf(" ");
        }
        printf("%d",linha[i]);//imprimir os numeros de linhas
        printf(" ");
        for (int j = 0; j < 10; j++){
            if (j >= 3 && j < 6 && i == 2){
                tabuleiro[j][i] = navio1[2];//posição primeiro navio
            }
            if (i >= 6 && i < 9 && j == 4){
                tabuleiro[j][i] = navio2[2];//posição segundo navio
            }
            printf("%d ", tabuleiro[j][i]);//tabuleiro preenchido
        }
        
    }
    return 0;
}



