
#include <stdio.h>

void main()
{
    float lado, perimetro;
    
    printf("Digite o lado do quadrado: \n");
    scanf("%f", &lado);
    
    perimetro = lado * 4;
    
    printf("O perimetro deste quadrado: %.2f\n", perimetro);
    

    return;
}