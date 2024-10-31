
#include <stdio.h>

void main()
{
    float lado, perimetro;
    
    printf("Digite o lado do triangulo: \n");
    scanf("%f", &lado);
    
    perimetro = lado*3;
    
    printf("O perimetro do triangulo: %.2f", perimetro);
    
    return;
}