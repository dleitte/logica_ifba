/*Escreva um programa que leia um número e exiba o seu módulo.*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("insira um numero inteiro = \n");
    scanf("%d", &num);
    
    if (num >= 0){
        printf("O modulo = %d", num);
    }
    else{
        num = num*-1;
        printf("o modulo = %d", num);
    }

    return 0;
}