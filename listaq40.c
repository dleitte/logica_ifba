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
        if(num == 100){
            printf("cem");
            break;
        }
        else{
        printf("cento ");
        break;}
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
    
    if(centena > 0 && dezena > 0 ){
        printf("e ");
    }
    
    switch(dezena){
        case 1:
        if(unidade == 1){
            printf("onze ");
            break;}
        else if (unidade ==2){
            printf("doze ");
            break;}
        else if (unidade ==3){
            printf("treze ");
            break;}
        else if (unidade ==4){
            printf("quatorze ");
            break;}
        else if (unidade ==5){
            printf("quinze ");
            break;}
        else if (unidade ==6){
            printf("dezesseis ");
            break;}
        else if (unidade ==7){
            printf("dezessete ");
            break;}
        else if (unidade ==8){
            printf("dezoito ");
            break;}
        else if (unidade ==9){
            printf("dezenove ");
            break;}
        else{
        printf("dez ");
        break;}
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
    
    if(unidade > 0 && dezena > 1){
        printf("e ");
    }
    
    switch(unidade){
        case 1:
        if (dezena == 1){
            break;
        }
        else{
        printf("um");
        break;}
        case 2:
        if (dezena == 1){
            break;
        }
        else{
        printf("dois");
        break;}
        case 3:
        if (dezena == 1){
            break;
        }
        else{
        printf("tres");
        break;}
        case 4:
        if (dezena == 1){
            break;
        }
        else{
        printf("quatro");
        break;}
        case 5:
        if (dezena == 1){
            break;
        }
        else{
        printf("cinco");
        break;}
        case 6:
        if (dezena == 1){
            break;
        }
        else{
        printf("seis");
        break;}
        case 7:
        if (dezena == 1){
            break;
        }
        else{
        printf("sete");
        break;}
        case 8:
        if (dezena == 1){
            break;
        }
        else{
        printf("oito");
        break;}
        case 9:
        if (dezena == 1){
            break;
        }
        else{
        printf("nove");
        break;}
    }

    return 0;
}