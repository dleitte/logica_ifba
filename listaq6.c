#include <stdio.h>

int main()
{
    int num1,num2,divisao,resto;
    
    printf("Insira o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Insira o segundo numero: \n");
    scanf("%d", &num2);
    
    divisao = num1/num2;
    resto = num1%num2;
    
    printf("A divisao = %d \n O resto = %d", divisao, resto);

    return 0;
}