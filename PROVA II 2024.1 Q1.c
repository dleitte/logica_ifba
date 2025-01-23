/*2024.1 Q1*/
#include <stdio.h>

int main() {
    int n, count = 1; 

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  
        } else {
            n = 3 * n + 1;  
        }
        count++; 
    }

    printf("Número de termos: %d\n", count);

    return 0;
}