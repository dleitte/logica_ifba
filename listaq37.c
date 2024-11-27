/*37. Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.*/
#include <stdio.h>

int main() {
    int tipo, area;
    float custoPorAcre, custoTotal, descontoArea = 0, descontoValor = 0;

    printf("Digite o tipo de pulverização (1 a 4): ");
    scanf("%d", &tipo);
    printf("Digite a área a ser pulverizada (em acres): ");
    scanf("%d", &area);

    switch(tipo) {
        case 1: 
            custoPorAcre = 50.00;
            break;
        case 2: 
            custoPorAcre = 100.00;
            break;
        case 3: 
            custoPorAcre = 150.00;
            break;
        case 4: 
            custoPorAcre = 250.00;
            break;
        default:
            printf("Tipo de pulverização inválido.\n");
            return 1;
    }
    custoTotal = custoPorAcre * area;

    if (area > 1000) {
        descontoArea = custoTotal * 0.05;
        custoTotal -= descontoArea;
    }

    if (custoTotal > 750) {
        descontoValor = (custoTotal - 750) * 0.10;
        custoTotal -= descontoValor;
    }

    printf("Custo total sem desconto: R$ %.2f\n", custoPorAcre * area);
    if (descontoArea > 0) {
        printf("Desconto de 5%% pela área superior a 1000 acres: R$ %.2f\n", descontoArea);
    }
    if (descontoValor > 0) {
        printf("Desconto de 10%% pelo valor acima de R$ 750,00: R$ %.2f\n", descontoValor);
    }
    printf("Valor a ser pago: R$ %.2f\n", custoTotal);

    return 0;
}