/*33. Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).*/
#include <stdio.h>

int main() {
    float x, y;

    printf("Digite as coordenadas do ponto x:\n");
    scanf("%f", &x);
    printf("Digite as coordenadas do ponto y = ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("O ponto está na origem.\n");
    }
    else if (x == 0) {
        printf("O ponto está sobre o eixo Y.\n");
    }
    else if (y == 0) {
        printf("O ponto está sobre o eixo X.\n");
    }
    else if (x > 0 && y > 0) {
        printf("O ponto está no primeiro quadrante.\n");
    }
    else if (x < 0 && y > 0) {
        printf("O ponto está no segundo quadrante.\n");
    }
    else if (x < 0 && y < 0) {
        printf("O ponto está no terceiro quadrante.\n");
    }
    else if (x > 0 && y < 0) {
        printf("O ponto está no quarto quadrante.\n");
    }

    return 0;
}