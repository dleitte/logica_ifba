/*66. Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
um segundo vetor e imprima este último.*/
#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int i;

    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 10; i++) {
        vetor2[i] = vetor1[i];
    }

    printf("\nConteúdo do segundo vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: %d\n", i + 1, vetor2[i]);
    }

    return 0;
}
