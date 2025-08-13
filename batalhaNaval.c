#include <stdio.h>

#define linha 10
#define coluna 10
#define linha_cone 10
#define coluna_cone 10
#define valor_agua 0
#define valor_marcado 1
#define valor_navio 3
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

        
        int tiroX = 3;
        int tiroY = 4;
            for(size_t l = 0; l < 3; l++){
                tabuleiro[linha_tabuleiro][coluna_tabuleiro++] = 3; // Navios representados em Horizontal
                tabuleiro[linha_tabuleiro2++][coluna_tabuleiro2] = 3; // Navios represntados em Vertical
                tabuleiro[linha_tabuleiro3++][coluna_tabuleiro3++] = 3; // Navios representados em Diagonal
                tabuleiro[linha_tabuleiro4++][coluna_tabuleiro4++] = 3; // Navios representados em Diagonal 
            }   

            for(size_t h = 0; h < linha_cone; h++){
                for(size_t g = 0; g < coluna_cone; g++){
                    // Trocar todos estes if else por cases, [QUANDO FOR ENVIAR PARA O PROFESSOR]
                    if(tiroX == h && tiroY == g){ // Case 1
                    if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    } else if(tiroX + 1 == h && tiroY - 1 == g){ // Case 2
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }     
                    } else if(tiroX + 1 == h && tiroY == g){ // Case 3
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    }else if(tiroX + 1 == h && tiroY + 1 == g){ // Case 4
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    }else if(tiroX + 2 == h && tiroY == g){ // Case 5
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }     
                    } else if(tiroX + 2 == h && tiroY - 2 == g){ // Case 5
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    } else if(tiroX + 2 == h && tiroY - 1 == g){ // Case 5
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    }else if(tiroX + 2 == h && tiroY + 1 == g){ // Case 5
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    } else if(tiroX + 2 == h && tiroY  + 2 == g){ // Case 5
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }    
                    }
                }
            }

            for(size_t i = 0; i < linha; i++ ){
                for(size_t j = 0; j < coluna; j++){
                    printf("%d ", tabuleiro[i][j]);
                }

                printf("\n"); 
            } // Print do tabuleiro*
    return 0;
}