/*78*/
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Digite uma string: ");
    gets(str); 

    printf("Digite o caractere a ser contado: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Número de ocorrências do caractere '%c': %d\n", ch, count);

    return 0;
}
