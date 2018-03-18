/* Construa um algoritmo que apresente o nome e o sal�rio de dois funcion�rios, 
de acordo com os seguintes crit�rios: 
a) Sal�rios que sejam maiores ou iguais a R$ 1000,00 e menores ou iguais a R$ 1500,00 
b) Funcion�rios pertencentes aos departamentos de produ��o ou engenharia. 
Obs: Os departamentos s�o reconhecidos pelas letras (P) Produ��o e (E) Engenharia S�o fornecidos o nome do funcion�rio (NF), 
o seu sal�rio (SAL) e o departamento onde trabalha (DEP). */

#include <stdio.h>

int main(int argc, char** argv)
{
	char nome1[10],nome2[10],dep1[2],dep2[2];
	float salario1,salario2;
	
	printf("Func.1 - Informe seu nome: ");
	scanf("%s",nome1);
	printf("Func.1 - Informe seu salario: R$");
	scanf("%f",&salario1);
	printf("Func.1 - Informe seu departamento: ");
	scanf("%s",dep1);
	printf("Func.2 - Informe seu nome: ");
	scanf("%s",nome2);
	printf("Func.2 - Informe seu salario: R$");
	scanf("%f",&salario2);
	printf("Func.2 - Informe seu departamento: ");
	scanf("%s",dep2);
	
	if (salario1 >= 1000 && salario1 <= 1500)
	{
		printf("Funcionario: %s\nSalario: R$%.2f\nDepartamento: %s",nome1,salario1,dep1);
	}
	if (salario2 >= 1000 && salario2 <= 1500)
	{
		printf("Funcionario: %s\nSalario: R$%.2f\nDepartamento: %s",nome2,salario2,dep2);
	}
	return 0;
}