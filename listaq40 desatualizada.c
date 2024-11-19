#include <stdio.h>
//40. Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
//numero por extenso.
int main()
{
    int num, centena, dezena, unidade;
    
    printf("Insira um numero inteiro de 1-999 \n");
    scanf("%d", &num);
    
    centena = num/100;
    dezena = (num%100)/10;
    unidade = num % 10;
    
    switch(centena){
        case 1: 
        printf("cento ");
        break;
        case 2: 
        printf("duzentos ");
        break;
        case 3: 
        printf("trezentos ");
        break;
        case 4: 
        printf("quatrocentos ");
        break;
        case 5: 
        printf("quinhentos ");
        break;
        case 6: 
        printf("seiscentos ");
        break;
        case 7: 
        printf("setecentos ");
        break;
        case 8: 
        printf("oitocentos ");
        break;
        case 9: 
        printf("novecentos ");
        break;
    }
    
    if(dezena > 0){
        printf("e ");
    }
    
    switch(dezena){
        case 1:
        printf("dez ");
        break;
        case 2:
        printf("vinte ");
        break;
        case 3:
        printf("trinta ");
        break;
        case 4:
        printf("quarenta ");
        break;
        case 5:
        printf("cinquenta ");
        break;
        case 6:
        printf("sessenta ");
        break;
        case 7:
        printf("setenta ");
        break;
        case 8:
        printf("oitenta ");
        break;
        case 9:
        printf("noventa ");
        break;
    }
    
    if(unidade > 0){
        printf("e ");
    }
    
    switch(unidade){
        case 1:
        printf("um");
        break;
        case 2:
        printf("dois");
        break;
        case 3:
        printf("tres");
        break;
        case 4:
        printf("quatro");
        break;
        case 5:
        printf("cinco");
        break;
        case 6:
        printf("seis");
        break;
        case 7:
        printf("sete");
        break;
        case 8:
        printf("oito");
        break;
        case 9:
        printf("nove");
        break;
    }

    return 0;
}