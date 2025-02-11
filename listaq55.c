/*55. Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110.
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142,
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220).
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e
18416 são amigos, por exemplo).*/
#include <stdio.h>

int main() {
    int num1, num2, somaDivisores1 = 0, somaDivisores2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) {
            somaDivisores1 += i;
        }
    }

    for (int i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0) {
            somaDivisores2 += i;
        }
    }

    if (somaDivisores1 == num2 && somaDivisores2 == num1) {
        printf("%d e %d sao numeros amigos.\n", num1, num2);
    } else {
        printf("%d e %d nao sao numeros amigos.\n", num1, num2);
    }

    return 0;
}
