#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float num1, num2;
		
	printf("--- Qual � o maior? ---\n");
	printf("-----------------------------\n");
	printf("Digite o primeiro n�mero: ");	
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	if (num1 > num2)
	{
		printf("O maior n�mero �: %.1f ", num1);				
	}
	else 
	{		
	printf("O maior n�mero �: %.1f", num2);
	}
		
	return 0;
}
