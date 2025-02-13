/*77*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], invertida[100];
    int i, len;

    printf("Digite uma string: ");
    gets(str); 

    len = strlen(str);
    for(i = 0; i < len; i++) {
        invertida[i] = str[len - i - 1];
    }
    invertida[i] = '\0';

    printf("String invertida: %s\n", invertida);

    return 0;
}
