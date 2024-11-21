#include <stdio.h> 
//16. Escreva um programa para gerar o invertido de um número com três algarismos
//(exemplo: o invertido de 498 é 894).
int main()
{
    int alg1, alg2, alg3;
    
    printf("insira o algarismo 1\n");
    scanf("%d", &alg1);
    printf("insira o algarismo 2\n");
    scanf("%d", &alg2);
    printf("insira o algarismo 3\n");
    scanf("%d", &alg3);
    
    printf("O numero invertido = %d %d %d", alg3, alg2, alg1);
    return 0;
}