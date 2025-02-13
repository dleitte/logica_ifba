/*68. Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.*/
#include <stdio.h>

int main() {
    float indicePluviometrico[30];
    int i, diaMaisChuva, diaMenosChuva;
    float maiorChuva, menorChuva;
    float mediaPrimeiraQuinzena = 0, mediaSegundaQuinzena = 0;

    printf("Digite o índice pluviométrico para cada dia do mês de Junho (30 dias):\n");
    for(i = 0; i < 30; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &indicePluviometrico[i]);
    }

    maiorChuva = indicePluviometrico[0];
    menorChuva = indicePluviometrico[0];
    diaMaisChuva = 1;
    diaMenosChuva = 1;

    for(i = 0; i < 30; i++) {
        if(i < 15) {
            mediaPrimeiraQuinzena += indicePluviometrico[i];
        }
        else {
            mediaSegundaQuinzena += indicePluviometrico[i];
        }

        if(indicePluviometrico[i] > maiorChuva) {
            maiorChuva = indicePluviometrico[i];
            diaMaisChuva = i + 1; // Ajuste para 1-indexado
        }

        if(indicePluviometrico[i] < menorChuva) {
            menorChuva = indicePluviometrico[i];
            diaMenosChuva = i + 1; // Ajuste para 1-indexado
        }
    }

    mediaPrimeiraQuinzena /= 15;
    mediaSegundaQuinzena /= 15;

    printf("\nDia que mais choveu: Dia %d com %.2f mm\n", diaMaisChuva, maiorChuva);
    printf("Dia que menos choveu: Dia %d com %.2f mm\n", diaMenosChuva, menorChuva);
    printf("Média pluviométrica da primeira quinzena: %.2f mm\n", mediaPrimeiraQuinzena);
    printf("Média pluviométrica da segunda quinzena: %.2f mm\n", mediaSegundaQuinzena);

    return 0;
}
