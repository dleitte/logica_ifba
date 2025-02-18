/*89. Escreva um programa em C, que gere uma string composta pelo último nome, seguido de
virgula e as iniciais dos demais nomes (em ordem), seguida de ponto. Por exemplo, se a
string entrada for “Gabriel Garcia Marquez”, a string gerada deve ser “Marquez, G. G.”.
*/
#include <stdio.h>
#define TAM 200

int main() {
    char str[TAM], resultado[TAM];
    int i = 0, j = 0, k = 0;

    printf("Digite o nome completo: ");
    fgets(str, sizeof(str), stdin);

    str[i] = '\0';

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            k = i + 1; 
        }
        i++;
    }

    i = k;
    while (str[i] != '\0' && str[i] != ' ') {
        resultado[j++] = str[i++];
    }

    resultado[j++] = ','; 

    i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            resultado[j++] = str[i];
            resultado[j++] = '.';  
        }
        i++;
    }

    resultado[j] = '\0';

    printf("Resultado: %s\n", resultado);

    return 0;
}
