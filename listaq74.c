/*74*/
#include <stdio.h>

#define MAX 30

int main() {
    int vetor[MAX], n = 0, opcao, valor, pos, i, j, k;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir no final\n");
        printf("2. Inserir em uma posição\n");
        printf("3. Remover de uma posição\n");
        printf("4. Remover todos elementos iguais a um valor\n");
        printf("5. Gerar vetor sem duplicidades\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:  
                if (n < MAX) {
                    printf("Digite o valor a ser inserido no final: ");
                    scanf("%d", &valor);
                    vetor[n] = valor;
                    n++;
                } else {
                    printf("Vetor cheio!\n");
                }
                break;

            case 2: 
                if (n < MAX) {
                    printf("Digite a posição (0 a %d) para inserir o valor: ", n);
                    scanf("%d", &pos);
                    if (pos >= 0 && pos <= n) {
                        printf("Digite o valor a ser inserido: ");
                        scanf("%d", &valor);
                        for (i = n; i > pos; i--) {
                            vetor[i] = vetor[i - 1];
                        }
                        vetor[pos] = valor;
                        n++;
                    } else {
                        printf("Posição inválida!\n");
                    }
                } else {
                    printf("Vetor cheio!\n");
                }
                break;

            case 3: 
                printf("Digite a posição (0 a %d) para remover o valor: ", n-1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    for (i = pos; i < n - 1; i++) {
                        vetor[i] = vetor[i + 1];
                    }
                    n--;
                } else {
                    printf("Posição inválida!\n");
                }
                break;

            case 4:  
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                for (i = 0; i < n; i++) {
                    if (vetor[i] == valor) {
                        for (j = i; j < n - 1; j++) {
                            vetor[j] = vetor[j + 1];
                        }
                        n--;
                        i--; 
                    }
                }
                break;

            case 5:  
                for (i = 0; i < n; i++) {
                    for (j = i + 1; j < n; j++) {
                        if (vetor[i] == vetor[j]) {
                            for (k = j; k < n - 1; k++) {
                                vetor[k] = vetor[k + 1];
                            }
                            n--;
                            j--; 
                        }
                    }
                }
                printf("Vetor sem duplicidades gerado!\n");
                break;

            case 6:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\nVetor atual: ");
        for (i = 0; i < n; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");

    } while (opcao != 6);

    return 0;
}
