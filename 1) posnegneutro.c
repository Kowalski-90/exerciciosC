#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float numero;
		
	printf("--- Positivo, negativo ou nulo? ---\n");
	printf("-----------------------------\n");
	printf("Digite um n�mero qualquer: ");	
	scanf("%f", &numero);
		
	if (numero > 0)	{ //Se entra no IF, n�o entra no ELSE!
		printf("O n�mero digitado � positivo", numero);				
	}
	else {
		if (numero < 0) {
			printf("O n�mero digitado � negativo", numero);
		}
		else {
			printf("O n�mero digitado � nulo", numero);
		}
	}				
	return 0;
}
