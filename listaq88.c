/*88. Escreva um programa em C, que coloque a string lida toda em caixa alta.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM];
    int i = 0;

    printf("Digite a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    printf("String em caixa alta: %s\n", str);

    return 0;
}
