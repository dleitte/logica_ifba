/*85. Escreva um programa que leia uma string representando um número hexadecimal (base
16) e imprima sua representação em decimal (base 10).*/
#include <stdio.h>
#define TAM 200
int main() {
    char hex[TAM];
    int decimal = 0, i = 0, valor;
    
    printf("Digite o número hexadecimal: ");
    fgets(hex, sizeof(hex), stdin);

    while (hex[i] != '\0' && hex[i] != '\n') {
        if (hex[i] >= '0' && hex[i] <= '9') {
            valor = hex[i] - '0'; 
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            valor = hex[i] - 'A' + 10; 
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            valor = hex[i] - 'a' + 10;
        } else {
            printf("Caractere inválido!\n");
            return 1; 
        }

        decimal = decimal * 16 + valor;

        i++;
    }

    printf("O valor decimal é: %d\n", decimal);

    return 0;
}
