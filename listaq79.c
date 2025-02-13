/*79*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[100];
    int start, end, i, j = 0;

    printf("Digite uma string: ");
    gets(str);

    printf("Digite a posição inicial: ");
    scanf("%d", &start);
    printf("Digite a posição final: ");
    scanf("%d", &end);

    if(start >= 0 && end < strlen(str) && start <= end) {
        for(i = start; i <= end; i++) {
            substring[j++] = str[i];
        }
        substring[j] = '\0';

        printf("Substring gerada: %s\n", substring);
    } else {
        printf("Posições inválidas!\n");
    }

    return 0;
}
