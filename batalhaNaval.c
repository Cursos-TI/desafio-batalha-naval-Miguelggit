#include <stdio.h>

int main(){
        int tabuleiro[11][11] = {0};
        int linha_tabuleiro = 7;
        int coluna_tabuleiro = 7;
        int linha_tabuleiro2 = 1;
        int coluna_tabuleiro2 = 4;
        tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 3;
        
        for(size_t k = 0; k < 1; k++){
            for(size_t l = 1; l <= 3; l++){
                tabuleiro[linha_tabuleiro][coluna_tabuleiro++] = 3;
                tabuleiro[linha_tabuleiro2++][coluna_tabuleiro2] = 3;
                
            }
        }

        for(size_t i = 1; i < 11; i++ ){
                        for(size_t j = 1; j < 11; j++){
                            printf("%d",tabuleiro[i][j]);
                        }
                        printf("\n");
                    } // Print do tabuleiro*



    return 0;
}