/*Escreva um programa que leia três números e mostre o maior entre eles.*/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("insira um numero inteiro = \n");
    scanf("%d", &num1);
    printf("insira um numero inteiro = \n");
    scanf("%d", &num2);
    
    if (num1>num2){
        printf("O maior numero = %d", num1);
    }
    else if(num1<num2){
        printf("O maior numero = %d", num2);
    }
    else{
        printf("ERROR");
    }

    return 0;
}