/*61. Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na
posição (um por linha)*/
#include <stdio.h>

int main() {
    int vetor[20], i;

    printf("Digite os 20 valores para o vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
        printf("posição %d: ", i);
    
}
}