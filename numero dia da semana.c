#include <stdio.h>

int main()
{
    int num;
    printf("insira um numero de 1-7: \n");
    scanf("%d", &num);
    
    if(num == 1)
    printf("Domingo");
    
    if(num == 2)
    printf("Segunda-Feira");
    
    if(num == 3)
    printf("Terca-Feira");
    
    if(num == 4)
    printf("Quarta-Feira");
    
    if(num == 5)
    printf("Quinta-Feira");
    
    if(num == 6)
    printf("Sexta-Feira");
    
    if(num == 7)
    printf("Sabado");


    return 0;
}