/*91. Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5.
Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e
somaColunas. Em cada posição do vetor somaLinhas deverá ser armazenada a soma da
linha correspondente na matriz A. Da mesma forma, em cada posição do vetor
somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A.*/
#include <stdio.h>
#define TAM 2

int main()
{
    int matrizA[TAM][TAM], somaLinha[TAM], somaColuna[TAM], i, j;
    
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("Digite o elemento [%d, %d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            somaLinha[i] += matrizA[i][j];
            somaColuna[j] += matrizA[i][j];
        }
    }
    
    for (i = 0; i < TAM; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinha[i]);
    }

    return 0;
}