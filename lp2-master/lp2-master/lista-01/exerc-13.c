/*13.	Um empregado em uma determina empresa tem seu sal�rio aumentado a cada ano em 5%, fa�a um algoritmo que leia o 
sal�rio inicial desse funcion�rio,quantos anos ele permaneceu na empresa e mostre no final com que
sal�rio ele estava ao sair da empresa*/

#include <stdio.h>
#define TAXA 0.05

int main(int argc, char** argv)
{
	int anos,i;
	float salarioinicial,salariofinal;
	
	printf("Informe seu salario inicial: R$");
	scanf("%f",&salarioinicial);
	printf("Informe quantos anos permaneceu na empresa: ");
	scanf("%d",&anos);
	
	salariofinal = salarioinicial;
	for (i = 0;i<anos;i++)
	{
		salariofinal +=  (TAXA*salariofinal);
	}
	
	printf("Salario Inicial: R$%.2f",salarioinicial);
	printf("\nSalario Final: R$%.2f",salariofinal);
	printf("\nAnos: %d",anos);
	return 0;
}