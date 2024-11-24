/*21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("insira um numero inteiro = \n");
    scanf("%d", &num);
    
    if (num >= 0){
        printf("O numero e positivo");
    }
    else{
        printf("o numero e negativo");
    }

    return 0;
}