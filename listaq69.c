/*69. Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
no vetor.*/
#include <stdio.h>

int main() {
    int vetor[15];
    int valor, i, contagem = 0;

    printf("Digite 15 números inteiros para o vetor:\n");
    for(i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o valor a ser procurado: ");
    scanf("%d", &valor);

    for(i = 0; i < 15; i++) {
        if(vetor[i] == valor) {
            contagem++;
        }
    }

    printf("\nO valor %d ocorre %d vez(es) no vetor.\n", valor, contagem);

    return 0;
}
