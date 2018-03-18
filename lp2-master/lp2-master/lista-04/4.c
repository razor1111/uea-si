#include <stdio.h>
#include <math.h>

/* Fa�a um procedimento que recebe por par�metro os valores necess�rios para o 
c�lculo da f�rmula de b�skara e imprima as suas ra�zes, caso seja poss�vel calcular*/
void baskara(int a,int b,int c);
int main(int argc, char** argv)
{
	int a,b,c;
	printf("Informe os coeficientes de uma eq. do 2o grau(ax2 + bx + c): ");
	scanf("%d %d %d",&a,&b,&c);
	baskara(a,b,c);
	return 0;
}

void baskara(int a,int b,int c){
	double delta;
	float raiz1,raiz2;
	delta = pow(b,2) - (4*a*c);
	if(delta > 0 || delta == 0){
		printf("Possui raiz real");
		raiz1 = -b + (sqrt(delta))/2*a;
		raiz2 = -b - (sqrt(delta))/2*a;
		printf("Raiz 1: %.2f\nRaiz 2: %.2f",raiz1,raiz2);
	}
	else if (delta < 0) {
		printf("Nao possui raizes");
	}
	return 0;
}