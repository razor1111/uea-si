/*Construa um algoritmo que leia o c�digo de um livro (CL) e apresente a categoria do livro, conforme a tabela abaixo: 
C�digo do Livro (CL) Categoria A Fic��o B N�o-Fic��o Qualquer outro c�digo Inv�lido 
 */

#include <stdio.h>

int main(int argc, char** argv)
{
	char cl[2];
	
	printf("Codigo do Livro (CL)\nCategoria\nA - Ficcao\nB - Nao-Ficcao");
	printf("\nDigite o codigo do livro desejado(CL): ");
	scanf("%s",cl);
	
	if (cl == "a")
	{
		printf("Livro de Ficcao!");
	}
	else if (cl == "b")
	{
		printf("Livro de nao-ficcao");
	}
	else
	{
		printf("codigo invalido");
	}
	return 0;
}