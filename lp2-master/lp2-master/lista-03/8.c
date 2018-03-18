/*A s�rie de FETUCCINE � gerada da seguinte forma: os dois primeiros termos s�o fornecidos pelo usu�rio;
 a partir da�, os termos s�o gerados com a soma ou subtra��o dos dois termos anteriores, 
 ou seja: Ai = Ai-1 + Ai-2 para i �mpar Ai = Ai-1 � Ai-2 para i par.
Criar um algoritmo que imprima os 10 primeiros termos da s�rie de FETUCCINE*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv)
{
	int i,a1,a2,ai;
	printf("Digite A1: ");
	scanf("%d",&a1);
	printf("Digite A2: ");
	scanf("%d",&a2);
	printf("%d",a1);
	printf("\n%d",a2);
	for (i=3;i<11;i++)
	{
		if (i%2 == 0)
		{
			ai = a2 - a1;
		}
		else
		{
			ai = a2 + a1;
		}
		printf("\n%d",ai);
		a1 = a2;
		a2 = ai;
	}
	return 0;
}