#include <stdio.h>

int main()
{
    int idade;
    char sexo;
    
    printf("insira o sexo (f ou m)\n");
    scanf("%c", &sexo);
    
    printf("insira a idade\n");
    scanf("%d", &idade);
    
    if(sexo == 'm'){
        if(idade>18)
        printf("nao deve se alistar");
        else{
        printf("deve se alistar");}
    }
    else{
        printf("nao deve se alistar");
    }
}