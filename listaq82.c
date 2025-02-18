/*82. Escreva um programa em C, que dada uma string (normalizada), imprima a maior palavra
dela.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM];
    char maior_palavra[TAM];
    int i = 0, j = 0, maior_tamanho = 0, k;
    int inicio_palavra = 0;

    printf("Digite a string normalizada: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\0') {
            if (j > maior_tamanho) {
                maior_tamanho = j;
                for (k = 0; k < j; k++) {
                    maior_palavra[k] = str[inicio_palavra + k];
                }
                maior_palavra[j] = '\0'; 
            }
            j = 0;
        } else {
            if (j == 0) {
                inicio_palavra = i;
            }
            j++;
        }

        i++;
    }

    if (j > maior_tamanho) {
        maior_tamanho = j;
        for (k = 0; k < j; k++) {
            maior_palavra[k] = str[inicio_palavra + k];
        }
        maior_palavra[j] = '\0';
    }

    printf("A maior palavra é: %s\n", maior_palavra);

    return 0;
}
