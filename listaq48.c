#include <stdio.h>

int main()
{
    int divisor = 1, num = 0, primo = 0;
    
    printf("Insira um numero\n");
    scanf("%d", &num);
    
    while(divisor<=num){
        
        if(num%divisor == 0){
        primo++;}
        divisor ++;
        
    }
    
    if(primo==2){
        printf("É PRIMO");
    }
    else{
        printf("NAO É PRIMO");
    }
    return 0;
}