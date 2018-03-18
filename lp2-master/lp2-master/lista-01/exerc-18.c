/*18.	Antes de o racionamento de energia ser decretado, quase ningu�m falava em quilowatts; mas agora, 
todos incorporaram essa palavra em seu vocabul�rio. Sabendo-se que 100 quilowatts de energia custa um s�timo do sal�rio 
m�nimo, fazer um algoritmo que receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia e 
calcule. Imprima:
a)	O valor em reais de cada quilowatt.
b)	O valor em reais a ser pago.
c)	O novo sal�rio a ser pago por essa resid�ncia com um desconto de 10%.
*/

#include <stdio.h>
#define DESC 0.10

int main(int argc, char** argv)
{
	float precokwind,precokwtotal,preconovo,kwres,salario;
	
	printf("Digite seu salario: R$");
	scanf("%f",&salario);
	printf("Informe quantos quilowatts hora gasta por uma residencia qualquer: ");
	scanf("%f",&kwres);
	
	precokwind = salario/700;
	precokwtotal = precokwind * kwres;
	preconovo = precokwtotal - (DESC*precokwtotal);
	
	printf("O valor em reais de cada quilowatt: R$%.2f",precokwind);
	printf("\nO valor em reais a ser pago: R$%.2f",precokwtotal);
	printf("\nNovo preco a ser pago com 10(por cento) de desconto: R$%.2f",preconovo);
	
	return 0;
}