#include <stdio.h>
//Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
int main()
{
    int idadeDia, idadeAno, idadeMes;
    
    printf("Insira a idade em dias: \n");
    scanf("%d", &idadeDia);
 
    idadeAno = idadeDia/365;
    idadeMes = idadeDia/30;
    
    printf("A idade em dias = %d \n A idade em meses = %d \n A idade em anos %d", idadeDia, idadeMes, idadeAno);

    return 0;
}