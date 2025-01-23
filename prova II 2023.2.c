/*2023.2 Q1*/
#include <stdio.h>

#define TAM 10

int main() {
    int num, soma = 0;
    int vendas[TAM];  
    int i = 0;  

    while (1){
        printf("Digite o número de venda: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num == 0) {
            if (i > 0) {
                i--;  
                soma -= vendas[i];  
            }
        } else {
            vendas[i] = num;
            soma += num;
            i++;
        }
    }

    printf("Total das vendas: %d\n", soma);

    return 0;
}
