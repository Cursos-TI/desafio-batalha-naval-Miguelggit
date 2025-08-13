#include <stdio.h>

#define linha 10
#define coluna 10
#define valor_navio 3
#define valor_agua 1
#define linha_teste 3
#define coluna_teste 5

int main(){

        int tx = 0;
        int ty = 2;
        int cone_tabuleiro[linha_teste][coluna_teste] = {0};
        int cone[0][0];
        cone[tx][ty] = 1;

            for(size_t h = 0; h < linha_teste; h++){
                for(size_t g = 0; g < coluna_teste; g++){
                    cone_tabuleiro[h][g] = 9;
                    if(tx == h && ty == g) {
                        cone_tabuleiro[h][g] = valor_agua;
                        
                    } if(tx + 1 == h && ty == g){

                        if(cone[tx][ty] != cone_tabuleiro[h][g]){

                            cone_tabuleiro[h][g] = valor_agua;
                        }

                        printf("%d ", cone_tabuleiro[tx][ty] );

                    } if(tx + 2 == h && ty == g){

                        if(cone[tx][ty] != cone_tabuleiro[h][g]){

                            cone_tabuleiro[h][g] = valor_agua;
                        }

                        printf("%d ", cone_tabuleiro[tx][ty] );

                    }else {
                        printf("%d ", cone_tabuleiro[h][g] );
                    }
                
                }
                printf("\n");
            }

    return 0;
}