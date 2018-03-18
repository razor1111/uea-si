/*23.	Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu rendimento, 
ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses. 
Sabendo-se que a f�rmula usada para este c�lculo �:
Valor acumulado = P * (1+i)n -1/i                     i=taxa; P=aplica��o; n=n�mero de meses
*/

#include<stdio.h>
#include<math.h>

int main(int argc, char** argv)
{
	int deposito,meses;
	float taxa,valoracumulado;
	
	printf("Informe o valor do deposito: R$");
	scanf("%d",&deposito);
	printf("Informe a taxa de juros(valor decimal): ");
	scanf("%f",&taxa);
	printf("Informe a quantidade de meses: ");
	scanf("%d",&meses);
	
	valoracumulado = (deposito * pow((1 + taxa),meses)) - (1 / taxa);
	
	printf("O valor acumulado foi R$%.2f",valoracumulado);
	return 0;
}