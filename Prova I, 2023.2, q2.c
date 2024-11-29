#include <stdio.h>

int main()
{
    int b4,b3,b2,b1,b0, num, swap, bit;
    
    printf("Escreva um numero de 0-35 \n");
    scanf("%d", &num);
    
    printf("Escreva o bit pra aplicar o swap \n");
    scanf("%d", &bit);
    
    b0 = (num % 2);
    b1 = (num / 2) % 2;
    b2 = (num / 4) % 2;
    b3 = (num / 8) % 2;
    b4 = (num / 16);
    
    switch(bit){
        case 0: 
         if(b0 == 0){
             b0 = 1;
         }
         else{
             b0 = 0;
         }
        break;
        case 1: 
         if(b1 == 0){
             b1 = 1;
         }
         else{
             b1 = 0;
         }
        break;
        case 2: 
         if(b2 == 0){
             b2 = 1;
         }
         else{
             b2 = 0;
         }
        break;
        case 3: 
         if(b3 == 0){
             b3 = 1;
         }
         else{
             b3 = 0;
         }
        break;
        case 4: 
         if(b4 == 0){
             b4 = 1;
         }
         else{
             b4 = 0;
         }
        break;
    }
    
    swap = (b4*16) + (b3*8) + (b2*4) + (b1*2) + b0;
    
    printf("O numero original = %d \n O numero apos o SWAP = %d", num, swap);

    return 0;
}