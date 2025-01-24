/*BUSCA BINARIA DE VETOR*/
#include <stdio.h>

#define TAM 8 

int main() {
    int chave, esquerda, direita, meio, resultado = -1, i, j, novoValor;
    
    int vetor[TAM];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                novoValor = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = novoValor;
            }
        }
    }

    printf("Digite o número a ser buscado: ");
    scanf("%d", &chave);
    
    esquerda = 0;
    direita = TAM - 1;

    while (esquerda <= direita) {
        meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == chave) {
            resultado = meio; 
            break;
        } else if (vetor[meio] < chave) {
            esquerda = meio + 1; 
        } else {
            direita = meio - 1; 
        }
    }

    if (resultado != -1) {
        printf("Elemento %d encontrado na posição %d.\n", chave, resultado);
    } else {
        printf("Elemento %d não encontrado.\n", chave);
    }

    return 0;
}