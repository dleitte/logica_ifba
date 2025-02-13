/*71*/
#include <stdio.h>

int main() {
    int vetor[10], valor, i;

    printf("Digite 10 números inteiros para o vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    int posicao = -1;
    for(i = 0; i < 10; i++) {
        if(vetor[i] == valor) {
            posicao = i;  
            break;
        }
    }

    printf("O valor %d foi encontrado na posição: %d\n", valor, posicao + 1);

    return 0;
}
