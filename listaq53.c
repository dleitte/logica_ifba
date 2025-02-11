#include <stdio.h>

int main()
{
    int paisA = 5000000, paisB = 7000000;
    float taxaNatalidadeA, taxaNatalidadeB;
    int tempoNecessario = 0;
    
    while(paisA < paisB){
        
        taxaNatalidadeA = paisA * 0.03;
        taxaNatalidadeB = paisB * 0.02;
        
        paisA += taxaNatalidadeA;
        paisB += taxaNatalidadeB;
        
        tempoNecessario++;
    }
    
    printf("%d anos\n", tempoNecessario);

    return 0;
}