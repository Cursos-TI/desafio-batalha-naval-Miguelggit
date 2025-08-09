#include <stdio.h>

int main(){
    int tabuleiro[11][11] = {0};
    int linha_navio_v = 1;
    int coluna_navio_v = 9;
    printf("Representação do tabuleiro \n");

    for (size_t i = 1; i <= 10; i++)
    {
        for(size_t j = 1; j <= 10; j++)
        {
            printf("%d ", (int)j);
        }
        printf("\n");
    }

    tabuleiro[7][4] = 3;
    tabuleiro[7][5] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[1][9] = 3;
    tabuleiro[2][9] = 3;
    tabuleiro[3][9] = 3;

    printf("\n Mostrando Jogo \n");

     for (size_t x = 1; x <= 10; x++)
    {
        for(size_t y = 1; y <= 10; y++)
        {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }
}