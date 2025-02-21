/*93. Faça um programa em C para ler valores e armazená-los em uma matriz D 5 x 5. A seguir
o programa deverá calcular a soma dos valores que compõem a diagonal principal e a
diagonal secundária da matriz. */
#include <stdio.h>

int main() {
    int DIMENSAO = 0, i, j, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;

    printf("Insira o numero de dimensao, sendo ela quadrada: ");
    scanf("%d", &DIMENSAO);

    int matriz[DIMENSAO][DIMENSAO];

    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("Digite o elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz inserida:\n");
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < DIMENSAO; i++) {
        somaDiagonalPrincipal += matriz[i][i];         
        somaDiagonalSecundaria += matriz[i][DIMENSAO - 1 - i]; 
    }

    printf("A soma da diagonal principal = %d\n", somaDiagonalPrincipal);
    printf("A soma da diagonal secundaria = %d\n", somaDiagonalSecundaria);

    return 0;
}
