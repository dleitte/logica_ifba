#include <stdio.h> 
//17. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
//mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
//para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
//no sentido de que as notas de menor valor fossem distribuídas em número mínimo
//possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
//uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
//1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
//distribuição das notas de acordo com o critério da distribuição ótima (considere existir
//notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
int main()
{
    int valorSaque, resto, nota1, nota2, nota5, nota10, nota20, nota50, nota100;
    
    printf("digite o valor do saque\n");
    scanf("%d", &valorSaque);
    
    nota100 = valorSaque/100;
    resto = valorSaque % 100;
    nota50 = resto/50;
    resto = resto % 50;
    nota20 = resto/20;
    resto = resto % 20;
    nota10 = resto/10;
    resto = resto % 10;
    nota5 = resto/5;
    resto = resto % 5;
    nota2 = resto/2;
    resto = resto% 2;
    nota1 = resto;
    
    printf("Nota de 100: %d \n Nota de 50: %d \n Nota de 20: %d \n Nota de 10: %d \n Nota de 5 %d \n Nota de 2 %d \n Nota de 1 %d \n", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
}