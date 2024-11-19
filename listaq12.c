#include <stdio.h>
//12. Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6. 
int main()
{
    float velocidadeMs, velocidadeKm;
    
    printf("insira a velocidade em m/s \n");
    scanf("%f", &velocidadeMs);
    
    velocidadeKm = velocidadeMs*3.6;
    
    printf(" a velocidade em km/h = %f", velocidadeKm);
    

    return 0;
}