#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Declaração do tabuleiro 10x10, inicializado com zeros (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Vetores que representam os navios
    int navioHorizontal[TAMANHO_NAVIO] = {3, 3, 3}; // Navio na horizontal
    int navioVertical[TAMANHO_NAVIO] = {3, 3, 3};   // Navio na vertical

    // Coordenadas iniciais para os navios
    int linhaHorizontal = 2; // linha de início do navio horizontal
    int colunaHorizontal = 1; // coluna de início do navio horizontal

    int linhaVertical = 4; // linha de início do navio vertical
    int colunaVertical = 7; // coluna de início do navio vertical

    // Validação simples para garantir que os navios cabem no tabuleiro
    if (colunaHorizontal + TAMANHO_NAVIO - 1 < TAMANHO_TABULEIRO) {
        // Posiciona o navio na horizontal
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        }
    } else {
        printf("Posição inválida para o navio horizontal.\n");
    }

    if (linhaVertical + TAMANHO_NAVIO - 1 < TAMANHO_TABULEIRO) {
        // Posiciona o navio na vertical
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = 3;
        }
    } else {
        printf("Posição inválida para o navio vertical.\n");
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}