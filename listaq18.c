#include <stdio.h> 
//Escreva um programa que permute o valor de duas variáveis inteiras.
int main()
{
    int valor1, valor2;
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);
    
    valor1 = valor1 + valor2; 
    valor2 = valor1 - valor2; 
    valor1 = valor1 - valor2; 
    
    printf("Valor 1: %d\nValor 2: %d\n", valor1, valor2);
    
    return 0;
}