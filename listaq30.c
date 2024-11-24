/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90  */
#include <stdio.h>

int main()
{
	float precoA = 1.90, precoG = 2.70, litros, valorTotal, valorUnitario, desconto;
    char tipoCombustivel;

    printf("Digite o numero de litros vendidos: \n");
    scanf("%f", &litros);
    getchar();
    printf("Digite o tipo de combustivel (A - Alcool, G - Gasolina): \n");
    scanf("%c", &tipoCombustivel);

    if (tipoCombustivel == 'A' || tipoCombustivel == 'a') { 
        if (litros <= 25) {
            desconto = 0.02;  
        } else {
            desconto = 0.04; 
        }
        valorUnitario = precoA;
     }
    else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') { 
        if (litros <= 25) {
            desconto = 0.03;  
        } else {
            desconto = 0.05;  
        }
        valorUnitario = precoG;
    }
    else {
        printf("Tipo de combustivel invalido.\n");
    }
    
    valorUnitario = valorUnitario * (1 - desconto);
    valorTotal = valorUnitario * litros; 

    printf("O valor a ser pago eh R$ %.2f\n", valorTotal);
	return 0;
}