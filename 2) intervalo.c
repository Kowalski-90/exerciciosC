#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float numero, inicio, fim, auxiliar;
		
	printf("--- Onde est� o n�mero? ---\n");
	printf("-----------------------------\n");
	
	printf("Digite o in�cio do intervalo: ");	
	scanf("%f", &inicio);
	
	printf("Digite o fim do intervalo: ");	
	scanf("%f", &fim);
	
	printf("Digite um n�mero: ");	
	scanf("%f", &numero);
	
	if (inicio > fim) {
		auxiliar = fim;
		fim = inicio;
		inicio = auxiliar;
	}
	
	if (numero < fim && numero > inicio) {
		printf ("O n�mero est� dentro do intervalo");
	}	
		else {
			if (numero > fim || numero < inicio) {
			printf("O n�mero est� fora do intervalo", numero);
			}
				else {
				printf("O n�mero est� nas extremidades do intervalo", numero);
				}	
	}				
}





	
