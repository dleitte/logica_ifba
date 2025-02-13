/*67. Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor.*/
#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[10];
    int i;
    
    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 10 números inteiros para o segundo vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor1[i] > vetor2[i]) {
            vetor3[i] = vetor1[i];
        } else {
            vetor3[i] = vetor2[i];
        }
    }

    printf("\nConteúdo do terceiro vetor (maiores valores):\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: %d\n", i + 1, vetor3[i]);
    }

    return 0;
}
