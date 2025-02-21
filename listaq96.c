/*96. Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes de
valores inteiros 3 por 4 e crie uma terceira matriz, que seja a soma das duas primeiras, e
uma quarta, que seja a diferença entre a primeira e a segunda. Mostrar as matrizes lidas e
calculadas. 
 */
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 4

int main() {
    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS];
    int soma[LINHAS][COLUNAS], diferenca[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os elementos da primeira matriz 3x4:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 3x4:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j]; 
            diferenca[i][j] = matriz1[i][j] - matriz2[i][j]; 
        }
    }

    printf("\nPrimeira matriz 3x4:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz 3x4:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz soma (primeira + segunda):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz diferença (primeira - segunda):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
