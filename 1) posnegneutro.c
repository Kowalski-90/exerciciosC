#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float numero;
		
	printf("--- Positivo, negativo ou nulo? ---\n");
	printf("-----------------------------\n");
	printf("Digite um número qualquer: ");	
	scanf("%f", &numero);
		
	if (numero > 0)	{ //Se entra no IF, não entra no ELSE!
		printf("O número digitado é positivo", numero);				
	}
	else {
		if (numero < 0) {
			printf("O número digitado é negativo", numero);
		}
		else {
			printf("O número digitado é nulo", numero);
		}
	}				
	return 0;
}
