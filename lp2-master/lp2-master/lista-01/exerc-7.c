/*7.	Fa�a um algoritmo que leia valores para as vari�veis A, B e C e mostre o 
resultado da seguinte express�o: (A - C) * B */

#include <stdio.h>

int main(int argc, char** argv)
{
	int resultado,a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	resultado = (a - c)*b;
	printf("(A - C)*B = %d",resultado);
	return 0;
}