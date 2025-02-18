/*83. Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM];
    int i = 0, j = 0, is_palindrome = 1;

    printf("Digite a string normalizada: ");
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0') {
        i++;
    }
    i--; 

    for (j = 0; j < i; j++, i--) {
        if (str[j] != str[i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string NÃO é um palíndromo.\n");
    }

    return 0;
}
