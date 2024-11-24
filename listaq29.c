/*Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de
desconto é 334,29, o que seja menor.  */
#include <stdio.h>

int main()
{
	float salario, desconto;

	printf("insira o valor do salario \n");
	scanf("%f", &salario);

	desconto = salario*0.11;
	
	if (desconto>334.29){
	    salario = salario - 334.29;
	    printf("O salario com desconto = %f", salario);
	}
	else{
	    salario = salario - desconto;
	    printf("O salario com desconto = %f", salario);
	}
	

	return 0;
}