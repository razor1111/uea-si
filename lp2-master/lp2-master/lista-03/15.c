/*A s�rie de Fibonacci � formada pela seguinte seq��ncia: 1,1,2,3,5,8,13,21,34,55...etc. 
Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv){
	int ant=1,post=1,fib = 0;
	int i = 0;
	printf("%d\n%d",ant,post);
	for (i = 0;i < 20;i++){
		fib = ant + post;
		printf("\n%d",fib);
		ant = post;
		post = fib;
	}
	getch();
	return 0;
}