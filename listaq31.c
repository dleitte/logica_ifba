/*31. No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a
seguir: Calcula-se o percentual de passes completados em relação aos passes tentados
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0,
respectivamente).
Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados.
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).
Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados.
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).
Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de jardas passadas, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback.*/
#include <stdio.h>

int main() {
    float passesTentados, passesCompletos, jardasPassadas, passesTouchdown, passesInterceptados, percentual, parcela1, razaoJardas, parcela2, razaoTouchdown, parcela3, razaoInterceptados, parcela4, qbRating;

    printf("Digite o número de passes tentados: ");
    scanf("%f", &passesTentados);

    printf("Digite o número de passes completos: ");
    scanf("%f", &passesCompletos);

    printf("Digite o número de jardas passadas: ");
    scanf("%f", &jardasPassadas);

    printf("Digite o número de passes para touchdown: ");
    scanf("%f", &passesTouchdown);

    printf("Digite o número de passes interceptados: ");
    scanf("%f", &passesInterceptados);

    percentual = passesCompletos / passesTentados;
    parcela1 = (percentual - 0.3) / 0.2;
    if (parcela1 > 2.375) parcela1 = 2.375;
    if (parcela1 < 0) parcela1 = 0;

    razaoJardas = (float)jardasPassadas / passesTentados;
    parcela2 = (razaoJardas - 3) / 4;
    if (parcela2 > 2.375) parcela2 = 2.375;
    if (parcela2 < 0) parcela2 = 0;

    razaoTouchdown = (float)passesTouchdown / passesTentados;
    parcela3 = razaoTouchdown / 0.05;
    if (parcela3 > 2.375) parcela3 = 2.375;
    if (parcela3 < 0) parcela3 = 0;

    razaoInterceptados = (float)passesInterceptados / passesTentados;
    parcela4 = (razaoInterceptados - 0.095) / 0.04;
    if (parcela4 > 2.375) parcela4 = 2.375;
    if (parcela4 < 0) parcela4 = 0;

    qbRating = (parcela1 + parcela2 + parcela3 + parcela4) * 100 / 6;

    printf("O QB Rating do quarterback é: %.2f\n", qbRating);

    return 0;
}