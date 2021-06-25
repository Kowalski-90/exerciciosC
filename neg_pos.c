#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
		
	printf("--- Positivo ou negativo? ---\n");
	printf("-----------------------------\n");
	printf("Digite um número qualquer: ");	
	scanf("%i", &x);
	
	if (x < 0)
	{
		printf("O número é negativo");		
	}
	else 
	{
	printf("O número é positivo");
	}
		
	return 0;
}
