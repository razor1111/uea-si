/*15.	Ler dois n�meros inteiros, x e y, e imprimir o quociente e o resto da divis�o inteira entre eles*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int x,y,quoc;
	float resto;
	
	scanf("%d %d",&x,&y);
	
	quoc = (int) x/y;
	resto = x%y;
	
	printf("O quociente e %d e o resto e %.1f",quoc,resto);
	return 0;
}