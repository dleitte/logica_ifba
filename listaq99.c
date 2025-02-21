/*99. Escrever um algoritmo e implementá-lo em linguagem C que dada uma matriz N X N,
contendo, em cada linha, as idades do homem e da mulher no casamento, criar uma
matriz de freqüência de idade de casamento, com as contagens para cada combinação de
idades. As idades variam de 18 até 30. Os pares de idade devem ser lidos até que se
informe um valor inválido para a idade de qualquer dos dois nubentes. Em seguida, o
programa deverá informar:
(1) Qual a idade mais freqüente de casamento dos homens
(2) Qual a idade mais freqüente de casamento das mulheres
(3) Qual a combinação mais freqüente de idades de casamento
 */
#include <stdio.h>

#define MIN_IDADE 18
#define MAX_IDADE 30
#define TAMANHO (MAX_IDADE - MIN_IDADE + 1)  

int main() {
    int matriz_frequencia[TAMANHO][TAMANHO] = {0};  
    int idade_homem, idade_mulher;
    int i, j;
    int mais_frequente_homem = -1, mais_frequente_mulher = -1;
    int maior_freq_homem = 0, maior_freq_mulher = 0;
    int combinacao_frequente_i = -1, combinacao_frequente_j = -1;
    int maior_freq_combinacao = 0;

    printf("Digite as idades do homem e da mulher no casamento (18 a 30).\n");
    printf("Digite valores inválidos para finalizar a entrada.\n");

    while (1) {
        printf("Idade do homem: ");
        scanf("%d", &idade_homem);

        if (idade_homem < MIN_IDADE || idade_homem > MAX_IDADE) {
            break;  
        }

        printf("Idade da mulher: ");
        scanf("%d", &idade_mulher);

        if (idade_mulher < MIN_IDADE || idade_mulher > MAX_IDADE) {
            break; 
        }

        matriz_frequencia[idade_homem - MIN_IDADE][idade_mulher - MIN_IDADE]++;
    }

    for (i = 0; i < TAMANHO; i++) {
        int freq_homem = 0;
        for (j = 0; j < TAMANHO; j++) {
            freq_homem += matriz_frequencia[i][j];  
        }
        if (freq_homem > maior_freq_homem) {
            maior_freq_homem = freq_homem;
            mais_frequente_homem = i + MIN_IDADE;
        }
    }

    for (j = 0; j < TAMANHO; j++) {
        int freq_mulher = 0;
        for (i = 0; i < TAMANHO; i++) {
            freq_mulher += matriz_frequencia[i][j];  
        }
        if (freq_mulher > maior_freq_mulher) {
            maior_freq_mulher = freq_mulher;
            mais_frequente_mulher = j + MIN_IDADE;
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (matriz_frequencia[i][j] > maior_freq_combinacao) {
                maior_freq_combinacao = matriz_frequencia[i][j];
                combinacao_frequente_i = i + MIN_IDADE;
                combinacao_frequente_j = j + MIN_IDADE;
            }
        }
    }

    printf("\nResultados:\n");
    printf("A idade mais frequente de casamento dos homens: %d\n", mais_frequente_homem);
    printf("A idade mais frequente de casamento das mulheres: %d\n", mais_frequente_mulher);
    printf("A combinação mais frequente de idades de casamento (homem, mulher): (%d, %d)\n",
           combinacao_frequente_i, combinacao_frequente_j);

    return 0;
}
