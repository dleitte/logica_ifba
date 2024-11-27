/*35. Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro.*/
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Erro: número inválido. Digite um número de 1 a 7.\n");
    }

    return 0;
}