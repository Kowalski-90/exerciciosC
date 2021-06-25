#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int ano;
		
	printf("--- Esse ano é (foi) bissexto? ---\n");
	printf("-----------------------------\n");
	printf("Digite o ano, com quatro digitos: ");	
	scanf("%d", &ano);
	
	if (ano % 4 == 0 && ano % 100 != 0)
	{
		printf("----------------------");
		printf("\nAno bissexto", ano);				
	}	
	else
	{
		printf("----------------------");
		printf("\nAno não bissexto", ano);
	}
	return 0;
}
