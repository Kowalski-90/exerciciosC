#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float numero, inicio, fim, auxiliar;
		
	printf("--- Onde está o número? ---\n");
	printf("-----------------------------\n");
	
	printf("Digite o início do intervalo: ");	
	scanf("%f", &inicio);
	
	printf("Digite o fim do intervalo: ");	
	scanf("%f", &fim);
	
	printf("Digite um número: ");	
	scanf("%f", &numero);
	
	if (inicio > fim) {
		auxiliar = fim;
		fim = inicio;
		inicio = auxiliar;
	}
	
	if (numero < fim && numero > inicio) {
		printf ("O número está dentro do intervalo");
	}	
		else {
			if (numero > fim || numero < inicio) {
			printf("O número está fora do intervalo", numero);
			}
				else {
				printf("O número está nas extremidades do intervalo", numero);
				}	
	}				
}





	
