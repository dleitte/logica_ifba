#include <stdio.h>

int main()
{
    //Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas.
    
    float nota1b1, nota2b1, nota1b2, nota2b2, media;
    
    printf("Insira a nota 1 do primeiro bimestre: \n");
    scanf("%f", &nota1b1);
    
    printf("Insira a nota 2 do primeiro bimestre: \n");
    scanf("%f", &nota2b1);
    
    printf("Insira a nota 1 do segundo bimestre: \n");
    scanf("%f", &nota1b2);
    
    printf("Insira a nota 2 do segundo bimestre: \n");
    scanf("%f", &nota2b2);
    
    media = (nota1b1 + nota2b1 + nota1b2 + nota2b2)/2;
    
    printf("A media do aluno = %f", media);
    return 0;
}