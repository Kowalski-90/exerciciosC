#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
		
	printf("--- Entre 0 e 9 ---\n");
	printf("-----------------------------\n");
	printf("Digite um número qualquer: ");	
	scanf("%i", &x);
	
	if (x >= 1 && x <=9)
	{
		printf("O número se encontra entre 0 e 9");		
	}
	else 
	{
	printf("O número não se encontra entre 0 e 9");
	}
		
	return 0;
}
