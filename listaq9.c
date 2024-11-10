#include <stdio.h>
//Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
//seu raio e sua altura.
int main()
{
    float raio, altura, volume;
    
    printf("Insira o raio da lata de oleo: \n");
    scanf("%f", &raio);
    printf("Insira a altura da lata de oleo: \n");
    scanf("%f", &altura);

    volume =3.14*((raio*raio)*altura);
    
    printf("O volume da lata  = %f ", volume);

    return 0;
}