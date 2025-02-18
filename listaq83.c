/*83. Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM], substring[TAM];
    int inicio, fim, i, j = 0;

    printf("Digite a string original: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite a posição inicial da substring: ");
    scanf("%d", &inicio);
    printf("Digite a posição final da substring: ");
    scanf("%d", &fim);

    if (inicio < 0 || fim < 0 || inicio > fim) {
        printf("Posições inválidas!\n");
        return 1;
    }

    for (i = inicio; i <= fim && str[i] != '\0'; i++) {
        substring[j++] = str[i];
    }
    substring[j] = '\0';

    printf("A substring gerada é: %s\n", substring);

    return 0;
}
