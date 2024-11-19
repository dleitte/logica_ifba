#include <stdio.h>
//13. Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito. 
int main()
{
    float req, r1,r2,r3;
    
    printf("insira a resistencia 1 \n");
    scanf("%f", &r1);
    printf("insira a resistencia 2 \n");
    scanf("%f", &r2);
    printf("insira a resistencia 3 \n");
    scanf("%f", &r3);
    
    req = (1/r1) + (1/r2) + (1/r3);
    
    printf(" a resistencia equivalente = %f", req);
    

    return 0;
}