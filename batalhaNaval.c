#include <stdio.h>
// Programa de Batalha Naval - Exibição do Tabuleiro

int main()
{
    // Criando as linhas do tabuleiro
    char linhas[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

    // Tabuleiro de batalha naval 10x10
    int tabuleiro[10][10] = { 0 }; // Criando o tabuleiro 10x10 e inicializando com 0

    //Posicionando navios no tabuleiro
    tabuleiro[2][2] = 3; // Posiciona uma parte do navio na posição C2
    tabuleiro[2][3] = 3; // Posiciona uma parte do navio na posição D2
    tabuleiro[2][4] = 3; // Posiciona uma parte do navio na posição E2

    tabuleiro[5][5] = 3; // Posiciona uma parte do navio na posição F5
    tabuleiro[6][5] = 3; // Posiciona uma parte do navio na posição F6
    tabuleiro[7][5] = 3; // Posiciona uma parte do navio na posição F7


    // Exibe cabeçalho com letras (horizontal)
    printf("   "); // Espaço inicial para alinhar com as linhas numéricas
    for (int i = 0; i < 10; i++) {
        printf(" %c", linhas[i]);
    }
    printf("\n");


    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i); // Número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
