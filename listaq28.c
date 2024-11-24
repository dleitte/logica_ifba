/*Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante. */
#include <stdio.h>

int main()
{
	char letra;

	printf("insira uma letra de a-z = \n");
	scanf("%c", &letra);

	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
		printf("A letra e vogal");
	}
    else{
		printf("A letra e consoante");
    }

	return 0;
}