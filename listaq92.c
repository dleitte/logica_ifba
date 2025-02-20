/*92. Elabore um programa em C, para ler valores e armazená-los em uma matriz 5 x 5. Após o
programa deverá responder se a matriz é ou não uma matriz simétrica. Uma matriz
simétrica possui a mesma composição de valores abaixo e acima da diagonal principal.*/
#include <stdio.h>

#define N 2

int main() {
    int matriz[N][N];
    int simetrica = 1; 

    printf("Digite os valores para a matriz 5x5:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matriz[i][j] != matriz[j][i]) { 
                simetrica = 0;  
                break;
            }
        }
        if (simetrica == 0) {
            break;
        }
    }

    if (simetrica == 1) {
        printf("\nA matriz e simétrica.\n");
    } else {
        printf("\nA matriz nao e simétrica.\n");
    }

    return 0;
}
