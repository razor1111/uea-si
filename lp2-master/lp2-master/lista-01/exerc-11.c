/*11.	Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para fazer uma viagem 
at� a casa de sua irm�. Fa�a um algoritmo que calcule quantos litros de gasolina Maria 
vai gastar de dinheiro e gasolina para chegar at� a casa de sua irm� sabendo que: 
-A dist�ncia da casa de Maria at� sua irm�: 520km;
-O carro de Maria consome 12 litros de gasolina por quil�metro rodado;
-O pre�o da gasolina est� R$ 1,50 o litro.
*/

#include <stdio.h>
/*incompleta*/
#define DISTANCIA 520
#define CONSUMO 5
#define PRECO 1.5

int main(int argc, char** argv)
{
	float consumototal,preconec;
	
	consumototal = DISTANCIA*CONSUMO;
	preconec = consumototal * PRECO;
	
	printf("Sao necessarios %.1f L de gasolina, custando cerca de R$%.2f.",consumototal,preconec);
	
	return 0;
}