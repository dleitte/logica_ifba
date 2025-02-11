/*58*/
#include <stdio.h>

int main() {
    int N;
    float pi = 0.0, termo;
    int i;

    printf("Digite o número de termos N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        termo = 1.0 / (2 * i + 1); 
        termo = termo * termo * termo; 

        if (i % 2 == 0) {
            pi += termo;  
        } else {
            pi -= termo;  
        }
    }

    pi *= 8;

    printf("Valor aproximado de pi para N = %d termos: %.10f\n", N, pi);

    return 0;
}
