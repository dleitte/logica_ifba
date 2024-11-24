/*Escreva um programa que leia um número e imprima se este número é ou não par*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("insira um numero inteiro = \n");
    scanf("%d", &num);
    
    num = num%2;
    
    if (num == 0){
        printf("O numero e par");
    }
    else if(num==1){
        printf("O numero e impar");
    }
    else{
        printf("ERROR");
    }

    return 0;
}