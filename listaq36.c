/*36. Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações.*/
#include <stdio.h>

int main() {
    float notaI, notaII, notaIII, notaIV, notaV;

    printf("Digite a nota do exame I: ");
    scanf("%f", &notaI);
    printf("Digite a nota do exame II: ");
    scanf("%f", &notaII);
    printf("Digite a nota do exame III: ");
    scanf("%f", &notaIII);
    printf("Digite a nota do exame IV: ");
    scanf("%f", &notaIV);
    printf("Digite a nota do exame V: ");
    scanf("%f", &notaV);

    if (notaI >= 70 && notaII >= 70 && notaIII >= 70 && notaIV >= 70 && notaV >= 70) {
        printf("Classificação: A - Passou em todos os exames.\n");
    } else if (notaI >= 70 && notaII >= 70 && notaIII < 70 && notaIV >= 70 && notaV < 70) {
        printf("Classificação: B - Passou em I, II e IV, mas não em III ou V.\n");
    } else if ((notaI >= 70 && notaII >= 70 && (notaIII >= 70 || notaIV >= 70)) && notaV < 70) {
        printf("Classificação: C - Passou em I e II, III ou IV, mas não em V.\n");
    } else {
        printf("Classificação: Reprovado - Outras situações.\n");
    }

    return 0;
}