/*2024.1 Q2*/
#include <stdio.h>

#define TAM 600

int main() {
    int p1, p2, p3, t1, t2, t3, areaAberta, janela[TAM], i; 
    
    printf("insira a posição 1 e o tamanho 1 da folha: ");
    scanf("%d %d", &p1, &t1);
    printf("insira a posição 2 e o tamanho 2 da folha: ");
    scanf("%d %d", &p2, &t2);
    printf("insira a posição 3 e o tamanho 3 da folha: ");
    scanf("%d %d", &p3, &t3);
    
    for(i = 0; i < TAM; i++){
        janela[i] = 0;
    }

    for(i = p1; i < p1 + t1; i++){
        if (i < TAM) janela[i] = 1;
    }
    for(i = p2; i < p2 + t2; i++){
        if (i < TAM) janela[i] = 1;
    }
    for(i = p3; i < p3 + t3; i++){
        if (i < TAM) janela[i] = 1;
    }

    areaAberta = 0;
    for(i = 0; i < TAM; i++){
        if (janela[i] == 0) {  
            areaAberta++;
        }
    }
    
    printf("Área Aberta = %d\n", areaAberta);

    return 0;
}