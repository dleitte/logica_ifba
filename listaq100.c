/*100. Verificar se uma matriz dada forma um Quadrado Latino de ordem N, no qual
em cada linha e em cada coluna aparecem todos os inteiros 1,2,3, ... N, ou seja, cada linha
ou coluna é permutação dos N primeiros números inteiros. 
 */
#include <stdio.h>

#define MAX_N 20  

int main() {
    int N;
    
    printf("Digite a ordem N da matriz: ");
    scanf("%d", &N);
    
    int matriz[MAX_N][MAX_N];
    int i, j;

    printf("Digite os elementos da matriz %d x %d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        int presente[MAX_N + 1] = {0};  
        for (j = 0; j < N; j++) {
            int num = matriz[i][j];
            if (num < 1 || num > N || presente[num] == 1) {
                printf("A matriz não é um Quadrado Latino (linha %d inválida).\n", i + 1);
                return 0;  
            }
            presente[num] = 1;
        }
    }

    for (j = 0; j < N; j++) {
        int presente[MAX_N + 1] = {0};  
        for (i = 0; i < N; i++) {
            int num = matriz[i][j];
            if (num < 1 || num > N || presente[num] == 1) {
                printf("A matriz não é um Quadrado Latino (coluna %d inválida).\n", j + 1);
                return 0;  
            }
            presente[num] = 1;
        }
    }

    printf("A matriz é um Quadrado Latino de ordem %d.\n", N);
    return 0;
}
