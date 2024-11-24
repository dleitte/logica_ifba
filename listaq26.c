/*Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.*/
#include <stdio.h>

int main()
{
	int num1,num2,num3, soma;

	printf("insira um numero inteiro = \n");
	scanf("%d", &num1);
	printf("insira um numero inteiro = \n");
	scanf("%d", &num2);
	printf("insira um numero inteiro = \n");
	scanf("%d", &num3);

	if (num1>num2 && num2>num3) {
		soma = num1 + num2;
		printf("a soma dos dois maiores = %d", soma);
	}
    else if (num1>num2 && num3>num2){
        soma = num1 + num3;
        printf("a soma dos dois maiores = %d", soma);
    }
    else if (num2>num1 && num1>num3){
        soma = num2 + num1;
        printf("a soma dos dois maiores = %d", soma);
    }
    else if (num2>num3 && num3>num1){
        soma = num2 + num3;
        printf("a soma dos dois maiores = %d", soma);
    }
    else if (num3>num1 && num1>num2){
        soma = num1 + num3;
        printf("a soma dos dois maiores = %d", soma);
    }
    else if (num3>num2 && num2>num1){
        soma = num3 + num2;
        printf("a soma dos dois maiores = %d", soma);
    }


	return 0;
}