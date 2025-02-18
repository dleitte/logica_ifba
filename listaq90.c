/*90. Escreva um programa em C, que dado uma string, crie uma nova string contendo na
ordem em que aparecem no string dado, as vogais no começo e as consoantes no final.
*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM], resultado[TAM];
    int i = 0, j = 0, k = 0;

    printf("Digite a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[i] = '\0';

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            resultado[j++] = str[i];
        }
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
              str[i] == ' ')) {
            resultado[j++] = str[i];
        }
        i++;
    }

    resultado[j] = '\0';

    printf("Resultado: %s\n", resultado);

    return 0;
}
