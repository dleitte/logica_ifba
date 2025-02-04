/*String declarar*/
#include <stdio.h>
#define MAX 256

int main()
{
    char nome [MAX];
    int idade;
    
    printf("informe o nome e a idade: \n");
    scanf("%s %d", nome, &idade);
    
    printf("nome = %s \nidade = %d\n", nome,idade);
}

