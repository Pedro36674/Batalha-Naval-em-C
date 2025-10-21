#include <stdio.h>
// Programa de Batalha Naval - Exibição do Tabuleiro

int main()
{
    // Criando as linhas do tabuleiro
    char linhas[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

    // Tabuleiro de batalha naval 10x10
    int tabuleiro[10][10] = { 0 }; // Criando o tabuleiro 10x10 e inicializando com 0

    //Posicionando navios no tabuleiro

    // Navio 1 (tamanho 3) na linha 2, colunas 0 a 3 (horizontal)
    tabuleiro[2][2] = 3; // Posiciona uma parte do navio na posição C2
    tabuleiro[2][3] = 3; // Posiciona uma parte do navio na posição D2
    tabuleiro[2][4] = 3; // Posiciona uma parte do navio na posição E2

    // Navio 2 (tamanho 3) na coluna F, linhas 5 a 7 (vertical)
    tabuleiro[0][7] = 3; // Posiciona uma parte do navio na posição H5
    tabuleiro[1][7] = 3; // Posiciona uma parte do navio na posição H6
    tabuleiro[2][7] = 3; // Posiciona uma parte do navio na posição H7

    // Navio 3 (tamanho 3, diagonal) na diagonal de G7 a I9
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][6 + i] = 3; // Posiciona partes do navio nas posições G7, H8, I9
    }

    // Navio 4 (tamanho 3, diagonal) na diagonal de A9 a C7
    for (int i = 0; i < 3; i++) {
        tabuleiro[9 - i][0 + i] = 3; // Posiciona partes do navio nas posições A9, B8, C7
    }

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
