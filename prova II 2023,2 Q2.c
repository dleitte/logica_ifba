/*2023.2 Q2*/
#include <stdio.h>

int main() {
    int expoente, mersenne,primo;

    printf("Lista dos primeiros 20 expoentes de Mersenne e seus respectivos números:\n");

    for (expoente = 2; expoente <= 21; expoente++) {
        mersenne = (1 << expoente) - 1;  

        
        primo = 1;
        if (mersenne <= 1) {
            primo = 0;  
        } else {
            for (int i = 2; i * i <= mersenne; i++) {
                if (mersenne % i == 0) {
                    primo = 0;  
                    break;
                }
            }
        }

        if (primo) {
            printf("M%d = %d\n", expoente, mersenne);
        }
    }

    return 0;
}