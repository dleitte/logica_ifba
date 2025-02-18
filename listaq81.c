/*81. Escreva um programa em C que normalize uma string lida, em uma nova string.
Normalizar uma string é o processo de remover os espaços excedentes que separam as
palavras.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM], str_normalizada[TAM];
    int i = 0, j = 0;
    int espaco_anterior = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str_normalizada[j++] = str[i];
            espaco_anterior = 0; 
        }
        else if (!espaco_anterior) {
            str_normalizada[j++] = ' ';
            espaco_anterior = 1; 
        }
        
        i++;
    }

    if (j > 0 && str_normalizada[j - 1] == ' ') {
        str_normalizada[j - 1] = '\0';
    } else {
        str_normalizada[j] = '\0';
    }

    printf("String normalizada: '%s'\n", str_normalizada);

    return 0;
}
