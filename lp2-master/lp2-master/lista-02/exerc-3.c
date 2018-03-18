/* Construa um algoritmo que leia dois n�meros (A e B). Caso A seja igual a B, apresentar a soma dos dois. 
Caso um seja maior que o outro, apresentar a diferen�a entre os dois n�meros 
(sempre lembrando que a diferen�a entre dois n�meros � SEMPRE positiva). */

#include <stdio.h>

int main(int argc, char** argv)
{
	int a,b,soma = 0,dif = 0;
	
	printf("Digite o valor de A e B\n");
	scanf("%d %d",&a,&b);
	
	if (a == b)
	{
		soma = a + b;
		printf("A soma de A + B = %d",soma);
	}
	else if (a > b)
	{
		dif = a - b;
		printf("A diferenca entre A e B = %d",dif);
	}
	else
	{
		dif = b - a;
		printf("A diferenca entre B e A = %d",dif);
	}
	return 0;
}