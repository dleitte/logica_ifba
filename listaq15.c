#include <stdio.h>
//15. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
//suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
//chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
//calcular a altura do prédio.
int main()
{
    float alturaPessoa, sombraPredio, alturaPredio, sombraPessoa;
    
    printf("Insira sua altura: \n");
    scanf("%f", &alturaPessoa);
    
    printf("Insira o tamanho da sombra do predio: \n");
    scanf("%f", &sombraPredio);
    
    sombraPessoa = alturaPessoa*2;
 
    alturaPredio = (sombraPredio/sombraPessoa)* alturaPessoa;
    
    printf("A altura do predio = %f", alturaPredio);

    return 0;
}