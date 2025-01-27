/*2022.2 Q2*/
#include <stdio.h>

#define TAM 10

int main() {
    int A, B;
    int contagem[TAM] = {0};

    scanf("%d %d", &A, &B);
    
    for (int i = A; i <= B; i++) {
        int num = i;
 
        while (num > 0) {
            int digito = num % TAM;  
            contagem[digito]++;     
            num /= TAM;          
        }
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d ", contagem[i]);
    }
    printf("\n");

    return 0;
}