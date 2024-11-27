/*32. Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).*/
#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("O caractere '%c' é uma vogal.\n", c);
        } else {
            printf("O caractere '%c' é uma consoante.\n", c);
        }
    }
    else if (c >= '0' && c <= '9') {
        printf("O caractere '%c' é um número.\n", c);
    }
    else {
        printf("O caractere '%c' é um símbolo.\n", c);
    }

    return 0;
}