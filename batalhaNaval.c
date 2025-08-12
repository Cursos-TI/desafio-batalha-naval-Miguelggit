#include <stdio.h>

#define linha 10
#define coluna 10
#define tiroConeX 4
#define tiroConeY 4
#define tiroCruzX 7
#define tiroCruzY 7
#define tiroOctaedroX 8
#define tiroOctaedroY 2

int main(){

        int tabuleiro[linha][coluna] = {0};

        int linha_tabuleiro = 7;
        int coluna_tabuleiro = 7;

        int linha_tabuleiro2 = 0;
        int coluna_tabuleiro2 = 4;

        int linha_tabuleiro3 = 0;
        int coluna_tabuleiro3 = 0;

        int linha_tabuleiro4 = 5;
        int coluna_tabuleiro4 = 3;

        int cone[tiroConeX][tiroConeY];
        int cruz[tiroCruzX][tiroCruzY];
        int octaedro[tiroOctaedroX][tiroOctaedroY];
        
            for(size_t l = 1; l <= 3; l++){
                tabuleiro[linha_tabuleiro][coluna_tabuleiro++] = 3; // Navios representados em Horizontal
                tabuleiro[linha_tabuleiro2++][coluna_tabuleiro2] = 3; // Navios represntados em Vertical
                tabuleiro[linha_tabuleiro3++][coluna_tabuleiro3++] = 3; // Navios representados em Diagonal
                tabuleiro[linha_tabuleiro4++][coluna_tabuleiro4++] = 3; // Navios representados em Diagonal 
            }

        for(size_t i = 0; i < linha; i++ ){

                        for(size_t j = 0; j < coluna; j++){
                            printf("%d ", tabuleiro[i][j]);
                        }
        printf("\n");
       } // Print do tabuleiro*
    return 0;
}