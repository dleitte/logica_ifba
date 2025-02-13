/*72*/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 20

int comparador(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float calcularMedia(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return (float)soma / tamanho;
}

float calcularMediana(int array[], int tamanho) {
    qsort(array, tamanho, sizeof(int), comparador);
    
    if (tamanho % 2 == 0) {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    } else {
        return array[tamanho / 2];
    }
}

int calcularModa(int array[], int tamanho) {
    int frequencia[TAMANHO] = {0};  
    int maiorFrequencia = 0;
    int moda = -1;

    for (int i = 0; i < tamanho; i++) {
        frequencia[array[i]]++;
    }

    for (int i = 0; i < tamanho; i++) {
        if (frequencia[array[i]] > maiorFrequencia) {
            maiorFrequencia = frequencia[array[i]];
            moda = array[i];
        }
    }

    return moda;
}

int main() {
    int array[TAMANHO];

    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    float media = calcularMedia(array, TAMANHO);
    printf("A média é: %.2f\n", media);

    float mediana = calcularMediana(array, TAMANHO);
    printf("A mediana é: %.2f\n", mediana);

    int moda = calcularModa(array, TAMANHO);
    printf("A moda é: %d\n", moda);

    return 0;
}
