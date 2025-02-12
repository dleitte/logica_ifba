/*63. Escreva um programa que leia dois vetores de números reais de mesma dimensão (10
posições), e imprima o vetor resultante da soma destes vetores.*/
#include <stdio.h>

int main() {
    float vetor1[10], vetor2[10], resultado[10];
    int i;

    printf("Digite os 10 valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor para a posição %d: ", i);
        scanf("%f", &vetor1[i]);  
    }

    printf("\nDigite os 10 valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor para a posição %d: ", i);
        scanf("%f", &vetor2[i]); 
    }

    for (i = 0; i < 10; i++) {
        resultado[i] = vetor1[i] + vetor2[i]; 
    }

    printf("\nVetor resultante da soma dos dois vetores:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição %d: %.2f\n", i, resultado[i]); 
    }

    return 0;
}
