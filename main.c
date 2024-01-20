#include <stdio.h>

int main() {
    // Definindo as dimensões da matriz
    int linhas = 3;
    int colunas = 4;

    // Declarando a matriz
    int matriz[linhas][colunas];

    // Preenchendo a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Vamos preencher a matriz com valores simples para este exemplo
            matriz[i][j] = i * colunas + j + 1;
        }
    }

    // Exibindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
