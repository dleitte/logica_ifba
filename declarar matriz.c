/*DECLARAR MATRIZ*/

#include <stdio.h>
#define LIN 2
#define COL 2

int main() {
    int matriz[LIN][COL], i, j;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("Digite o elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}