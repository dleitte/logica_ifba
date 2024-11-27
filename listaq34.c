/*34. Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou
não ser concedido.*/
#include <stdio.h>

int main() {
    float rendaMensal, valorEmprestimo, prestacao;
    int numeroPrestacoes;

    printf("Digite a renda mensal do solicitante: ");
    scanf("%f", &rendaMensal);

    printf("Digite o valor total do empréstimo solicitado: ");
    scanf("%f", &valorEmprestimo);

    printf("Digite o número de prestações desejadas: ");
    scanf("%d", &numeroPrestacoes);

    prestacao = valorEmprestimo / numeroPrestacoes;

    if (valorEmprestimo <= 10 * rendaMensal && prestacao <= 0.30 * rendaMensal) {
        printf("Empréstimo CONCEDIDO.\n");
    } else {
        printf("Empréstimo NÃO CONCEDIDO.\n");
    }

    return 0;
}