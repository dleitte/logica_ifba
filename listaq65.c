/*65. Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições.*/
#include <stdio.h>

int main() {
    int arr[20];
    int i, menor, maior;
    int pos_menor, pos_maior;

    printf("Digite 20 números inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    menor = arr[0];
    maior = arr[0];
    pos_menor = 0; 
    pos_maior = 0;

    for(i = 1; i < 20; i++) {
        if(arr[i] < menor) {
            menor = arr[i];
            pos_menor = i; 
        }
        if(arr[i] > maior) {
            maior = arr[i];
            pos_maior = i; 
        }
    }

    printf("O menor valor é: %d, encontrado na posição %d\n", menor, pos_menor + 1);
    printf("O maior valor é: %d, encontrado na posição %d\n", maior, pos_maior + 1);

    return 0;
}
