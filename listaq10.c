#include <stdio.h>
#include <stdio.h>

 int main()
{
    int numDecimal,b1,b2,b3,b4,b5;
   
    printf("Escreva um numero decimal de 0-31: \n");
    scanf("%d", &numDecimal);
   
    b1 = numDecimal % 2;
    numDecimal /=2;
   
    b2 = numDecimal % 2;
    numDecimal /=2;
   
    b3 = numDecimal % 2;
    numDecimal /=2;
   
    b4 = numDecimal % 2;
    numDecimal /=2;
   
    b5 = numDecimal % 2;
    numDecimal /=2;
   
    printf("O numero em binario = %d %d %d %d %d", b5,b4,b3,b2,b1);
   

    return 0;
}
