/*ORGANIZAR VETOR POR Bubble-sort*/
#include <stdio.h>

#define TAM 8

int main() {
    int vetor[TAM];
    int i, j, novosValores;

    printf("Digite os %d elementos do vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < TAM - 1; i++) {  
        for (j = 0; j < TAM - 1 - i; j++) {  
            if (vetor[j] > vetor[j + 1]) {
                novosValores = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = novosValores;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}