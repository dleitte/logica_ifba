//*52. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
//fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos
//dois termos anteriores, ou seja:
//1. Ai = Ai-1 + Ai-2, para i ímpar
//2. Ai = Ai-1 - Ai-2, para i par
//Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
//FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três
//termos.
#include <stdio.h>

int main() {
    int a1, a2, a3, num, i;
    
    printf("Insira o numero de termos: ");
    scanf("%d", &num);

    printf("Insira o primeiro termo: ");
    scanf("%d", &a1);
    
    printf("Insira o segundo termo: ");
    scanf("%d", &a2);

    printf("%d %d ", a1, a2);
    
    for (i = 2; i < num; i++) {
        if (i % 2 == 1) { 
            a3 = a2 + a1;
        } else { 
            a3 = a2 - a1;
        }
        
        printf("%d ", a3);
        
        a1 = a2;
        a2 = a3;
    }
    
    return 0;
}