
#include <stdio.h>

void main()
{
    float base, altura, perimetro;
    
    printf("Digite a base do retangulo: \n");
    scanf("%f", &base);
    
    printf("\nDigite a altura do retangulo\n");
    scanf("%f", &altura);
    
    perimetro = (base*2) + (altura*2);
    
    printf("O perimetro deste retangulo: %.2f\n", perimetro);
    

    return;
}