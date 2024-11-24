/*Escreva um programa que leia 3 números e calcule a média ponderada entre eles.
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5. */
#include <stdio.h>

int main()
{
	float num1,num2,num3, media;

	printf("insira um numero inteiro = \n");
	scanf("%f", &num1);
	printf("insira um numero inteiro = \n");
	scanf("%f", &num2);
	printf("insira um numero inteiro = \n");
	scanf("%f", &num3);

	if (num1>num2 && num1>num3) {
		media = ((num1*5) + (num2*2.5) + (num3*2.5))/3;
		printf("A media ponderada = %f", media);
	}
    else if (num2>num1 && num2>num3){
        media = ((num2*5) + (num1*2.5) + (num3*2.5))/3;
		printf("A media ponderada = %f", media);
    }
    else if (num3>num1 && num3>num2){
        media = ((num3*5) + (num2*2.5) + (num1*2.5))/3;
		printf("A media ponderada = %f", media);
    }

	return 0;
}