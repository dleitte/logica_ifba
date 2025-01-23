/*POSIÇÃO DE VETOR*/
#include <stdio.h>

#define TAM 8

int main(){
    
    int vetor[TAM]={5, 7, -2, -9, 0, 4, -2, -1};
    int elemento = 4;
    int posicao = -1;
    int i;

    for ( i = 0; i < TAM; i++) {
        if (vetor[i] == elemento) {
            posicao = i;
        }
    }
    
    if (posicao != -1){
        printf("%d\n", posicao);
    } else {
        printf("-1\n");
    }

    return 0;
}
