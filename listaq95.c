/*95. Escrever um algoritmo e implementá-lo em linguagem C que linearize uma matriz de 6
por 6, colocando os valores contidos nela em um vetor de 36 elementos e mostrar o
conteúdo do vetor.
 */
#include <stdio.h>

#define N 6 
#define TOTAL_ELEMENTOS (N * N)  

int main() {
    int matriz[N][N];  
    int vetor[TOTAL_ELEMENTOS];  
    int i, j, k = 0; 

    printf("Digite os elementos da matriz 6x6:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            vetor[k] = matriz[i][j]; 
            k++;  
        }
    }

    printf("\nVetor linearizado:\n");
    for (i = 0; i < TOTAL_ELEMENTOS; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
