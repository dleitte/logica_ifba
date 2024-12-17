#include <stdio.h>

int main(void) 
{
    int x = 1, fibonacci = 1, aux = 0, num, i; 
    
    printf("Insira o numero de termos ");
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    { 
        printf("%d ", fibonacci);                   
        fibonacci = fibonacci + aux;                 
        aux = x;
        x = fibonacci;        
    }
  return 0;
}