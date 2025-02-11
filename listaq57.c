/*57*/
#include <stdio.h>

int main() {
    int N;
    float soma = 0.0, i, j, potencia;

    printf("Digite o número de termos N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        potencia = 1.0;
        for (int j = 1; j <= i; j++) {
            potencia *= i;  
        }

        soma += 1.0 / potencia;
    }

    printf("O valor de S para N = %d é: %.10f\n", N, soma);

    return 0;
}
