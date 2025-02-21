/*98. Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes (4x3 e
3x2), calcule e imprima a matriz que representa o produto entre as duas matrizes lidas.
 */
#include <stdio.h>

#define LINHAS_A 4  
#define COLUNAS_A 3 
#define LINHAS_B 3  
#define COLUNAS_B 2 
#define LINHAS_C 4  
#define COLUNAS_C 2  

int main() {
    int A[LINHAS_A][COLUNAS_A], B[LINHAS_B][COLUNAS_B], C[LINHAS_C][COLUNAS_C];
    int i, j, k;

    printf("Digite os elementos da matriz A (4x3):\n");
    for (i = 0; i < LINHAS_A; i++) {
        for (j = 0; j < COLUNAS_A; j++) {
            printf("Elemento A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B (3x2):\n");
    for (i = 0; i < LINHAS_B; i++) {
        for (j = 0; j < COLUNAS_B; j++) {
            printf("Elemento B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < LINHAS_C; i++) {
        for (j = 0; j < COLUNAS_C; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < LINHAS_A; i++) {
        for (j = 0; j < COLUNAS_B; j++) {
            for (k = 0; k < COLUNAS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];  
            }
        }
    }

    printf("\nMatriz C (Produto A x B):\n");
    for (i = 0; i < LINHAS_C; i++) {
        for (j = 0; j < COLUNAS_C; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
