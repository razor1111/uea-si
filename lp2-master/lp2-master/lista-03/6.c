// Entrar com 10 n�meros e imprimir a metade de cada n�mero
#include <stdio.h>
#include <conio.h>
int main(int argc, char** argv)
{
	int i;
	float numero;
	float metade[6];
	for (i=0;i<5;i++)
	{
		printf("Digite o %do numero: ",(i+1));
		scanf("%f",&numero);
		metade[i] = numero/2;
	}
	for (i=0;i<5;i++)
	{
		printf("\n%.2f",metade[i]);	
	}
	getch();
	return 0;
}