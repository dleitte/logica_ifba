/*97. Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 5 por 5 e a exiba. A seguir, leia dois números x e y e em seguida troque a xésima linha pela y-ésima linha, a x-ésima coluna com a y-ésima coluna, a diagonal
principal com a secundária e, por fim mostre a matriz assim modificada. 
 */
#include <stdio.h>

#define N 5  // Definindo o tamanho da matriz 5x5

int main() {
    int matriz[N][N];
    int i, j, x, y;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite os números x e y (1 <= x, y <= 5): ");
    scanf("%d %d", &x, &y);

    x--; 
    y--;

    for (j = 0; j < N; j++) {
        int temp = matriz[x][j];
        matriz[x][j] = matriz[y][j];
        matriz[y][j] = temp;
    }

    for (i = 0; i < N; i++) {
        int temp = matriz[i][x];
        matriz[i][x] = matriz[i][y];
        matriz[i][y] = temp;
    }

    for (i = 0; i < N; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][N - 1 - i];
        matriz[i][N - 1 - i] = temp;
    }
    
    printf("\nMatriz modificada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
