/*39. Em diversas situações, é útil o uso de dígitos verificadores. Dígito
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do
número, começando da direita para a esquerda (do dígito menos significativo para o
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o
valor do dígito verificador quando este é 10. Escreva um programa que receba um
número com os 4 primeiros dígitos de uma agência e imprima o número da agência
completo (numero – dv).
Agência Alg. 1 Alg. 2 Alg. 3 Alg. 4 DV
4870-4 4 8 7 0 (4*5) + (8*4) + (7*3) + (0*2) = 73
73 mod 11 = 7 --- 11-7 = 4
4881-X 4 4 4 1 (4*5) + (8*4) + (8*3) + (1*2) = 78
78 mod 11 = 1 --- 11 – 1 = 10 (X)*/
#include <stdio.h>

int main() {
    int d1, d2, d3, d4, soma, dv;

    printf("Digite os 4 primeiros dígitos da agência: ");
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);

    soma = (d1 * 5) + (d2 * 4) + (d3 * 3) + (d4 * 2);

    dv = 11 - (soma % 11);
    
    if (dv == 10) {
        printf("Agência: %d%d%d%d-X\n", d1, d2, d3, d4);
    } else {
        printf("Agência: %d%d%d%d-%d\n", d1, d2, d3, d4, dv);
    }

    return 0;
}