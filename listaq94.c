/*94. Escrever um algoritmo e implementá-lo em linguagem C que leia uma matriz de valores
inteiros 6 por 6 e um valor inteiro qualquer, posteriormente multiplicar a matriz pelo
valor lido e colocar o resultado na própria matriz. 
 */
#include <stdio.h>

#define N 6  

int main() {
    int matriz[N][N]; 
    int valor, i, j;

    printf("Digite os elementos da matriz 6x6:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor inteiro para multiplicar a matriz: ");
    scanf("%d", &valor);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] *= valor; 
        }
}

    printf("\nMatriz resultante após a multiplicação:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
