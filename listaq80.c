/*80. Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda.*/
#include <stdio.h>
#define TAM 100

int main() {
    char str1[TAM], str2[TAM];
    int i, j, encontrado;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    encontrado = 0;

    for(i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == str2[0]) {
            for(j = 0; str2[j] != '\0'; j++) {
                if (str1[i + j] != str2[j]) {
                    break;
                }
            }
            
            if (str2[j] == '\0') {
                encontrado = 1;
                break;
            }
        }
    }

    if (encontrado) {
        printf("A primeira string contém a segunda.\n");
    } else {
        printf("A primeira string NÃO contém a segunda.\n");
    }

    return 0;
}
