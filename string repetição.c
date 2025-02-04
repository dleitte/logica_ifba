/*String repetição*/
#include <stdio.h>
#define MAX 256

int main()
{
    char nome [MAX];
    int tamanho;
    
    printf("informe o nome: \n");
    fgets(nome, MAX, stdin);
    
    tamanho = 0;
    
    while (nome[tamanho] != '\0' && '\n')// pode tirar o != '0', \n = enter
    tamanho++;
    
    puts(nome);
    printf("String: %s -- Tamanho: %d \n", nome, tamanho);
    
    for(tamanho = 0; nome[tamanho]; tamanho++)
}

