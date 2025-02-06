/*quantas vogais tem na string*/
#include <stdio.h>

#define TAM 256

int main()
{
    char str[TAM];
    int soma, i;
    
    printf("informe a string: \n");
    fgets(str, TAM, stdin);
    
    for(soma = 0, i = 0; str[i]; i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' ||str[i] == 'O' || str[i] == 'u'|| str[i] == 'U'){
            soma ++;
        }
    }
    
     printf("%d", soma);

    return 0;
}