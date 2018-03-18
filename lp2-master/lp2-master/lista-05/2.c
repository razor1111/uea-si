#include <stdio.h>

/*Armazenar 8 n�meros em um vetor e imprimir todos os n�meros. 
Ao final, dever� fornecer o total de n�meros m�ltiplos de seis digitados*/

#define tamanho 8
#define multiplo 6

void lerVetor(int vetor[]);
void imprimirVetor(int vetor[]);
int calcularMultiplos(int vetor[],int numero);

int main(int argc, char** argv){
	int vetor[tamanho];
	lerVetor(vetor);
	imprimirVetor(vetor);
	return 0;
}

void lerVetor(int vetor[]) {
	 int i;
	 for(i = 0;i < tamanho;i++){
		 printf("Vetor[%d]: ",i+1);
		 scanf("%d",&vetor[i]);
	 }
 }
 
void imprimirVetor(int vetor[]){
	int i;
	printf("\nVetor\n");
	for(i = 0;i < tamanho;i++){
		printf("%d\n",vetor[i]);
	}
	printf("No multiplos de 6: %d",calcularMultiplos(vetor,multiplo));
 }
 
int calcularMultiplos(int vetor[],int numero){
	int i,cont = 0;
	for(i = 0;i < tamanho;i++){
		if(vetor[i] % numero == 0){
			cont++;
		}
	}
	return cont;
 }