/*Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
dias deste mês.*/
#include <stdio.h>

int main()
{
    int numMes;
    
    printf("insira um numero inteiro de 1-12 = \n");
    scanf("%d", &numMes);
    
    switch (numMes){
        case 1:
        printf("janeiro possui 31 dias");
        break;
        case 2:
        printf("fevereiro possui 28 dias");
        break;
        case 3:
        printf("marco possui 31 dias");
        break;
        case 4:
        printf("abril possui 30 dias");
        break;
        case 5:
        printf("maio possui 31 dias");
        break;
        case 6:
        printf("junho possui 30 dias");
        break;
        case 7:
        printf("julho possui 31 dias");
        break;
        case 8:
        printf("agosto possui 31 dias");
        break;
        case 9:
        printf("setembro possui 30 dias");
        break;
        case 10:
        printf("outubro possui 31 dias");
        break;
        case 11:
        printf("novembro possui 30 dias");
        break;
        case 12:
        printf("dezembro possui 31 dias");
        break;
    }


    return 0;
}