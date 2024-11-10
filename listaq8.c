#include <stdio.h>
//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius 
int main()
{
    float c, f;
    
    printf("Insira a temperatura em Fahrenheit: \n");
    scanf("%f", &f);

    c = (5.0/9.0) * (f-32);
    
    printf("A temperatuta em celsius = %f ", c);

    return 0;
}