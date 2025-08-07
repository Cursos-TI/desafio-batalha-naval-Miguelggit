#include <stdio.h>

int main()
{
    // Numero 0 representa a agua;
    // Numero 3 representa o navio;

    int tabuleiro[0][0] = {0};
    int linha, coluna;
    int linhaNavio;
    int colunaNavio;
    printf("Escolha o tamanho do Tabuleiro!\n");
    printf("Digite uma linha de 0 a 10: ");
    scanf("%d", &linha);
    printf("Digite uma coluna de 0 a 10: ");
    scanf("%d", &coluna);

    printf("O tabuleiro tem um tamanho de %d x %d\n", linha, coluna);

    printf("Agora vamos posicionar o navio!\n");

    printf("Escolha a linha em que o navio sera colocado: ");
    scanf("%d", &linhaNavio);

    printf("Escolha a coluna em que o navio sera colocado: ");
    scanf("%d", &colunaNavio);

    int posicaoNavio[linhaNavio][colunaNavio];

    posicaoNavio[linhaNavio][colunaNavio] = 3; 


    printf(" O Navio esta na linha: %d coluna: %d valor: %d",linhaNavio, colunaNavio, posicaoNavio[linhaNavio][colunaNavio]);
    


}