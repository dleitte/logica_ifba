/*72*/
#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int baixo = 0, alto = tamanho - 1, meio;

    while(baixo <= alto) {
        meio = (baixo + alto) / 2;
        
        if(vetor[meio] == valor) {
            return meio;  
        } else if(vetor[meio] < valor) {
            baixo = meio + 1;  
        } else {
            alto = meio - 1;  
        }
    }

    return -1;  
}

int main() {
    int vetor[10], valor, i;

    printf("Digite 10 números inteiros ordenados para o vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    int posicao = buscaBinaria(vetor, 10, valor);

    if (posicao != -1) {
        printf("O valor %d foi encontrado na posição: %d\n", valor, posicao + 1);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valor);
    }

    return 0;
}
