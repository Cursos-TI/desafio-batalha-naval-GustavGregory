#include <stdio.h>

#define TAM_TABULEIRO 5   // Tabuleiro 5x5 (mais simples)
#define TAM_NAVIO 3       // Cada navio ocupa 3 posições
#define AGUA 0
#define NAVIO 3

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Coordenadas iniciais dos navios
    // Navio 1 → Horizontal na linha 1
    int navio1_linha = 1, navio1_coluna = 0;
    // Navio 2 → Vertical na coluna 3
    int navio2_linha = 0, navio2_coluna = 3;

    printf("=== POSICIONAMENTO DOS NAVIOS ===\n");

    // Posiciona o navio horizontal
    printf("\nNavio 1 (Horizontal):\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = navio1_linha;
        int coluna = navio1_coluna + i;
        tabuleiro[linha][coluna] = NAVIO;
        printf("Coordenada: (%d, %d)\n", linha, coluna);
    }

    // Posiciona o navio vertical
    printf("\nNavio 2 (Vertical):\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = navio2_linha + i;
        int coluna = navio2_coluna;
        tabuleiro[linha][coluna] = NAVIO;
        printf("Coordenada: (%d, %d)\n", linha, coluna);
    }

    // Exibe o tabuleiro completo
    printf("\n=== TABULEIRO 5x5 ===\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}
