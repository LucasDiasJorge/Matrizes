#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para transpor uma matriz
void transporMatriz(int matriz[LINHAS][COLUNAS], int transposta[COLUNAS][LINHAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para multiplicar duas matrizes
void multiplicarMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[COLUNAS][LINHAS], int resultado[LINHAS][LINHAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < LINHAS; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < COLUNAS; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int matriz1[LINHAS][COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[LINHAS][COLUNAS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[LINHAS][COLUNAS];
    int transposta[COLUNAS][LINHAS];

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2);

    printf("Soma das Matrizes:\n");
    somarMatrizes(matriz1, matriz2, resultado);
    imprimirMatriz(resultado);

    printf("Matriz Transposta de Matriz 1:\n");
    transporMatriz(matriz1, transposta);
    imprimirMatriz(transposta);

    printf("Produto das Matrizes:\n");
    multiplicarMatrizes(matriz1, matriz2, resultado);
    imprimirMatriz(resultado);

    return 0;
}
