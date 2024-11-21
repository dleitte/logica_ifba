#include <stdio.h>
//19. Escreva um programa que calcule a raiz de uma equação do primeiro grau.
int main() {
    float a, b, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if (a == 0) {
        printf("Não é uma equação do primeiro grau, pois o coeficiente a não pode ser zero.\n");
    } else {
        x = -b / a;
        printf("A raiz da equação %.2fx + %.2f = 0 é: %.2f\n", a, b, x);
    }

    return 0;
}