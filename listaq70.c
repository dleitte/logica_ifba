/*70. Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
do array é de 100 posições (carga de array com sentinela).*/
#include <stdio.h>

int main() {
    int array[100]; 
    int i = 0, valor;

    printf("Digite os números para o array (Digite -1 para encerrar):\n");
    while (i < 100) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &valor);

        if (valor == -1) {
            break;
        }

        array[i] = valor;
        i++;  
    }

    printf("\nValores carregados no array:\n");
    for (int j = 0; j < i; j++) {
        printf("Elemento %d: %d\n", j + 1, array[j]);
    }

    return 0;
}
