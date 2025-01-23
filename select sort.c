/*ORGANIZAR VETOR POR SELECT SORT*/
#include <stdio.h>

#define TAM 8

int main() {
    int vetor[TAM];
    int i, j, menorValor, novosValores;

    printf("Digite os %d elementos do vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
        
    }

    for (i = 0; i < TAM - 1; i++) {
        menorValor = i;
        for (j = i + 1; j < TAM; j++) {
            if (vetor[j] < vetor[menorValor]) {
                menorValor = j;
            }
        }
        
        novosValores = vetor[i];
        vetor[i] = vetor[menorValor];
        vetor[menorValor] = novosValores;
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}