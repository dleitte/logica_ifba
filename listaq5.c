
#include <stdio.h>

void main()
{
    int num, sucessor;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    
    sucessor = num + 1;
    
    printf("O sucessor de %d = %d:", num, sucessor);
    
    return;
}