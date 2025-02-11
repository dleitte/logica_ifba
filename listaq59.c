/*59*/
#include <stdio.h>

int main() {
    int n, i, j;           
    float euler, fatorial; 

    euler = 1.0f; 

    printf("Digite o número de termos n: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        fatorial = 1.0f;
        
        for (j = 1; j <= i; j++) {
            fatorial *= j;  
        }

        euler += 1.0f / fatorial;
    }

    printf("Valor aproximado de e para n = %d termos: %.10f\n", n, euler);

    return 0;
}
