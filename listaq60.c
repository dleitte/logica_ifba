/*60*/
#include <stdio.h>

int main() {
    int num, i, j, primo1, primo2;
    int is_primo1, is_primo2; 

    for (num = 500; num <= 1000; num += 2) { 
        for (i = 2; i <= num / 2; i++) {
            is_primo1 = 1; 
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_primo1 = 0; 
                    break;
                }
            }

            is_primo2 = 1;  
            for (j = 2; j * j <= num - i; j++) {
                if ((num - i) % j == 0) {
                    is_primo2 = 0;
                    break;
                }
            }
            
            if (is_primo1 && is_primo2) {
                primo1 = i;
                primo2 = num - i;
                printf("%d = %d + %d\n", num, primo1, primo2);
                break; 
            }
        }
    }

    return 0;
}
