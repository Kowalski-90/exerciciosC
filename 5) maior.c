#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float num1, num2;
		
	printf("--- Qual é o maior? ---\n");
	printf("-----------------------------\n");
	printf("Digite o primeiro número: ");	
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	if (num1 > num2)
	{
		printf("O maior número é: %.1f ", num1);				
	}
	else 
	{		
	printf("O maior número é: %.1f", num2);
	}
		
	return 0;
}
