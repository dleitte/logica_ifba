/*85. Escreva um programa que leia uma string representando um número hexadecimal (base
16) e imprima sua representação em decimal (base 10).*/
#include <stdio.h>
#define TAM 200

int main() {
    char roman[TAM];
    int i = 0, decimal = 0, valor;

    printf("Digite o número romano: ");
    fgets(roman, sizeof(roman), stdin);

    while (roman[i] != '\0' && roman[i] != '\n') {
        if (roman[i] == 'I' && (roman[i + 1] == 'V' || roman[i + 1] == 'X')) {
            decimal -= 1;
        } else if (roman[i] == 'V') {
            decimal += 5;
        } else if (roman[i] == 'X' && (roman[i + 1] == 'L' || roman[i + 1] == 'C')) {
            decimal -= 10;
        } else if (roman[i] == 'L') {
            decimal += 50;
        } else if (roman[i] == 'C' && (roman[i + 1] == 'D' || roman[i + 1] == 'M')) {
            decimal -= 100;
        } else if (roman[i] == 'D') {
            decimal += 500;
        } else if (roman[i] == 'M') {
            decimal += 1000;
        } else if (roman[i] == 'I') {
            decimal += 1;
        } else if (roman[i] == 'X') {
            decimal += 10;
        } else if (roman[i] == 'C') {
            decimal += 100;
        }
        i++;
    }

    printf("O valor decimal é: %d\n", decimal);

    return 0;
}
