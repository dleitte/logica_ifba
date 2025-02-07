#include <stdio.h>

#define FALSE 0
#define TRUE 1
#define TAM 256

int main()
{
    char str[TAM];
    char vogais[10] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
    int soma = 0, i, achou, j;
    
    printf("Informe a string: \n");
    fgets(str, TAM, stdin);
    
    for(i = 0; str[i]; i++){
        achou = FALSE; 
        for(j = 0; j < 10; j++) {
            if(str[i] == vogais[j]) {
                achou = TRUE;  
                break;  
            }
        }
        if(achou == TRUE) {  
            soma++;
        }
    }
    
    printf("Número de vogais: %d\n", soma);

    return 0;
}