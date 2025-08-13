#include <stdio.h>

#define linha 10
#define coluna 10
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

        
        int tiroX = 2;
        int tiroY = 4;

        int habilidade = 3;

            for(size_t l = 0; l < 3; l++){
                tabuleiro[linha_tabuleiro][coluna_tabuleiro++] = 3; // Navios representados em Horizontal
                tabuleiro[linha_tabuleiro2++][coluna_tabuleiro2] = 3; // Navios represntados em Vertical
                tabuleiro[linha_tabuleiro3++][coluna_tabuleiro3++] = 3; // Navios representados em Diagonal
                tabuleiro[linha_tabuleiro4++][coluna_tabuleiro4++] = 3; // Navios representados em Diagonal 
            }   

            switch (habilidade){
                case 1: // Habilidade Cone
            for(size_t h = 0; h < linha; h++){
                for(size_t g = 0; g < coluna; g++){
                    if(tiroX == h && tiroY == g){ // lOGICA TOPO CONE
                        if(tabuleiro[h][g] == 3){
                        tabuleiro[h][g] = valor_navio;
                    } else {
                        tabuleiro[h][g] = valor_marcado; 
                    }   
                    } else if(tiroX + 1 == h && tiroY - 1== g){ // LOGICA MEIO CONE
                        for(size_t r = 0; r < 3; r++){
                            if(tabuleiro[h][g] == 3){
                                tabuleiro[h][g++] = valor_navio;
                            } else {
                                tabuleiro[h][g++] = valor_marcado;
                            }
                        }
                    } else if(tiroX + 2 == h && tiroY - 2 == g){ // LOGICA BASE CONE
                        for(size_t t = 0; t < 5; t++){
                        if(tabuleiro[h][g] == 3){
                            tabuleiro[h][g++] = valor_navio;
                        } else {
                                tabuleiro[h][g++] = valor_marcado;
                            }
                        }    
                    }
                }
            }
                break;

                case 2: // Habilidade Cruz
                    for(size_t q = 0; q < linha; q++){
                        for(size_t w = 0; w < coluna; w++){
                            if(tiroX == q && tiroY == w){ // LOGICA TOPO CRUZ
                                if(tabuleiro[q][w] == valor_navio){
                                    tabuleiro[q][w] = valor_navio;
                                } else {
                                    tabuleiro[q][w] = valor_marcado;
                                } 
                            } else if (tiroX + 1 == q && tiroY - 2 == w){ // LOGICA MEIO CRUZ
                                for(size_t r = 0; r < 5; r++){
                                    if(tabuleiro[q][w] == 3){
                                        tabuleiro[q][w++] = valor_navio;
                                    } else {
                                        tabuleiro[q][w++] = valor_marcado;
                                    }
                                }
                            } else if (tiroX + 2 == q && tiroY == w){ // LOGICA FINAL CRUZ
                                    if(tabuleiro[q][w] == 3){
                                        tabuleiro[q][w++] = valor_navio;
                                    } else {
                                        tabuleiro[q][w++] = valor_marcado;
                                    }
                               
                            }
                        }
                    }
                break;

                case 3: // Habilidade Octaedro
                    for(size_t b = 0; b < linha; b++){
                        for(size_t n = 0; n < coluna; n++){
                            if(tiroX == b && tiroY == n){
                                if(tabuleiro[b][n] == 3){
                                    tabuleiro[b][n] = valor_navio;
                                } else {
                                    tabuleiro[b][n] = valor_marcado;
                                }
                            } else if( tiroX + 1 == b && tiroY - 1 == n){
                                for(size_t r = 0; r < 3; r++){
                                    if(tabuleiro[b][n] == 3){
                                        tabuleiro[b][n++] = valor_navio;
                                    } else {
                                        tabuleiro[b][n++] = valor_marcado;
                                    }
                                }
                            } else if(tiroX + 2 == b && tiroY == n){
                                    if(tabuleiro[b][n] == 3){
                                        tabuleiro[b][n] = valor_navio;
                                    } else {
                                        tabuleiro[b][n] = valor_marcado;
                                    }
                            }
                        }
                    }
                break;
            }

            for(size_t i = 0; i < linha; i++ ){
                for(size_t j = 0; j < coluna; j++){
                        printf("%d ", tabuleiro[i][j]);
                }

                printf("\n"); 
            } // Print do tabuleiro*
    return 0;
}