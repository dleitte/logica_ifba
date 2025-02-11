/*DECLARAR MATRIZ*/

#include <stdio.h>

int main() {
    int DIMENSAO = 0, i, j,soma = 0;
    
    printf("Insira o numero de dimensao, sendo ela quadrada");
    scanf("%d", &DIMENSAO);
    
    int matriz[DIMENSAO][DIMENSAO];

    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
     for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            if(i == j){ 
                soma += matriz[i][j];
            }
        }
        printf("\n");
    }
    
    printf("A soma da diagonal principal = %d", soma);

    return 0;
}