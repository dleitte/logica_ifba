#include <stdio.h>

int main()
{
    // fases da repetição, loop, laço, iteração
    //1- inicialização (variavel de controle = valor modificado para a repetição), de valor da variavel de controle
    //2- terminação (invariante) verifica se o invariante é vallido
    //3- iteração (altera o valor da variavel de controle)
    //4- corpo (oq eu quero que repita)
    
    //REPETIÇÃO COM TERMINAÇÃO NO INICIO
    int valor = 0, qtdeImpressoes = 0;
    
    while(qtdeImpressoes < 10){
    
    printf("Valor: %d\n", valor);
    valor+=2;
    qtdeImpressoes ++;
    }
    
    
    //REPETIÇAO COM TERMINAÇÃO NO FINAL
    do{
    printf("Valor: %d\n", valor);
    valor+=2;
    qtdeImpressoes ++;
    } while (qtdeImpressoes < 10);
    
    //REPEIÇÃO COM FASE EXPLICITA
    //for(inicialização, terminação, iteração) 
    //corpo;
    
    for(qtdeImpressoes = 0; qtdeImpressoes < 10; qtdeImpressoes ++){
        printf("Valor: %d\n", valor);
        valor+=2;
    }
    
    return 0;
}


