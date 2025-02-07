#include <stdio.h>

#define TAM 256

int main() {
    char str[TAM];
    int i;

    printf("Informe a palavra: \n");
    fgets(str, TAM, stdin); 

    for(i = 0; str[i]; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Palavra transformada: %s\n", str);

    return 0;
}