
#include <stdio.h>

void main()
{
    float raio, area, perimetro, pi = 3.14;
    
    printf("Digite o raio da circunferencia: \n");
    scanf("%f", &raio);
    
    perimetro = 2*pi*raio;
    area = pi*(raio*raio);
    
    printf("O perimetro da circunferencia: %.2f \n A area da circunferencia: %.2f", perimetro, area);
    
    return;
}