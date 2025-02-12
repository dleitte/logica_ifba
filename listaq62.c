/*62. Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade*/
#include <stdio.h>

int main() {
    int vetor[10]; 
    int count = 0, i;

    printf("Digite os 10 valores para o vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor para a posição %d: ", i);
        scanf("%d", &vetor[i]); 
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) { 
            count++;
        }
    }

    printf("Quantidade de números pares no vetor: %d\n", count);

    return 0;
}

