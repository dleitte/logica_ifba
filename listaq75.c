/*75*/
#include <stdio.h>

int main() {
    int vetor[15], i, j, temp;

    printf("Digite 15 números inteiros para ordenar:\n");
    for(i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 14; i++) {
        for(j = 0; j < 14 - i; j++) {
            if(vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for(i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
