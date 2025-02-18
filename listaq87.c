/*87. Escreva um programa em C, que verifique se duas strings são iguais, independente da
caixa das letras. Por exemplo, este programa deve dizer que “Teste”é igual a “TeStE”.*/
#include <stdio.h>
#define TAM 200

int main() {
    char str1[TAM], str2[TAM];
    int i = 0;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 'a' - 'A';
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 'a' - 'A'; 
        }

        if (str1[i] != str2[i]) {
            printf("As strings são diferentes.\n");
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
