#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
		
	printf("--- Positivo ou negativo? ---\n");
	printf("-----------------------------\n");
	printf("Digite um n�mero qualquer: ");	
	scanf("%i", &x);
	
	if (x < 0)
	{
		printf("O n�mero � negativo");		
	}
	else 
	{
	printf("O n�mero � positivo");
	}
		
	return 0;
}
