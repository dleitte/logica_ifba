/*54. Construa um programa que receba um número e verifique se ele é um número triangular.
(Um número é triangular quando é resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4)*/
#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 6) {
        printf("Nao e um numero triangular.\n");
        return 0;
    }
    
    for (i = 1; i <= numero / 3; i++) {
        if (i * (i + 1) * (i + 2) == numero) {
            printf("%d e um numero triangular.\n", numero);
            return 0;
        }
    }
    
    printf("Nao e um numero triangular.\n");

    return 0;
}