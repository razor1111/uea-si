/* Um n�mero primo � um inteiro positivo que � divis�vel s� por si e por 1. 
Calcule e imprima os primeiros n n�meros primos. (Sugest�o: um n�mero n ser� primo se nenhum dos quocientes n/2, n/3, n/4, . . . n/sqrt(n) for inteiro.)
 (Teste o seu programa calculando os primeiros 20 n�meros primos.)*/
 
#include<stdio.h>
#include<conio.h>
 
int main(int argc, char** argv){
	int cont1=0,cont2=0,numero = 0,i;
	while(cont2 < 20 && numero < 500){
		cont1 = 0;
		for(i=1;i<=numero;i++){
			if(numero%i == 0){
				cont1 += 1;
			}
		}
		if(cont1 == 2){
			printf("Numero Primo: %d\n",numero);
			cont2 += 1;
		}
		numero += 1;
	}
	getch();
	return 0;
}