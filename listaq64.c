/*64. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array.*/
#include <stdio.h>

int main() {
    int arr[20];
    int i, menor, maior;

    printf("Digite 20 números inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    menor = arr[0];
    maior = arr[0];

    for(i = 1; i < 20; i++) {
        if(arr[i] < menor) {
            menor = arr[i];
        }
        if(arr[i] > maior) {
            maior = arr[i];
        }
    }

    printf("O menor valor é: %d\n", menor);
    printf("O maior valor é: %d\n", maior);

    return 0;
}
