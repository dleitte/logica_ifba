/*QUESTÃO II (5.0)
Um cadeado possui um sistema de código para ser aberto em vez de uma chave. O cadeado 
contém uma sequência de três rodas. Cada roda possui os 9 dígitos (0..9) em ordem. Se você 
move uma roda para cima, o dígito que ela mostra muda para o próximo dígito (se o dígito 
mostrado for '9', então ela muda para '0'). Se você move uma roda para baixo, ela muda para o 
dígito anterior (se a dígito mostrado for '0', ela muda para '9').
O cadeado abre quando as rodas mostrarem uma determinada sequência numérica. Escreva um
programa que leia a configuração atual do cadeado (número atualmente exibido pelas rodas) e o
número de desbloqueio (a senha armazenada nas rodas) e indique qual o menor número de
movimentos necessários para abrir o cadeado. Por exemplo, se o número atual for 152 e o
segredo for 971, serão precisos: dois movimentos para o primeiro número (1→0→9), dois
movimentos para o segundo número (5→6→7) e um número para o terceiro número (1→2), logo a
saída deverá ser 5.*/
#include <stdio.h>

int main()
{
    int num, senha, num1,num2,num3, senha1,senha2,senha3, cima, baixo,distancia;
    
    printf("Escreva o numero aleatorio do cadeado = \n");
    scanf("%d", &num);
    printf("Escreva o numero da senha do cadeado = \n");
    scanf("%d", &senha);
    
    num1 = num/100;
    num2 = (num%100) / 10;
    num3 = num%10;
    senha1 = senha/100;
    senha2 = (senha%100) / 10;
    senha3 = senha%10;
    
    if(senha1 <= num1){
            cima = num1 - senha1;}
    else{
            cima = senha1 - num1;}
            
    baixo = 10 - cima;
    
    if(baixo>cima){
        distancia = cima;
    }
    else{
        distancia = baixo;
    }
    if(senha2 <= num2){
            cima = num2 - senha2;}
    else{
            cima = senha2 - num2;}
            
    baixo = 10 - cima;
    
    if(baixo>cima){
        distancia += cima;
    }
    else{
        distancia += baixo;
    }
    if(senha3 <= num3){
            cima = num3 - senha3;}
    else{
            cima = senha3 - num3;}
            
    baixo = 10 - cima;
    
    if(baixo>cima){
        distancia += cima;
    }
    else{
        distancia += baixo;
    }
    
    printf("a distancia = %d",distancia);
    


    return 0;
}