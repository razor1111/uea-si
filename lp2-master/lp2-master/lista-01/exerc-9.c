/*9.	Escreva um programa que leia um n�mero inteiro que represente a idade de uma pessoa (em anos). 
Calcule numa vari�vel real quantos minutos esta pessoa j� viveu e apresente na tela*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int idade,idademin;
	
	scanf("%d",&idade);
	
	idademin = (60*24*365*idade);
	
	printf("Voce viveu %d minutos!\n%d",idademin);
	return 0;
}