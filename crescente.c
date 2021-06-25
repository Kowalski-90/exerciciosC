#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float num1, num2;
		
	printf("--- Números em ordem crescente ---\n");
	printf("-----------------------------\n");
	printf("Digite o primeiro número: ");	
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	if (num1 > num2)
	{
		printf("A ordem crescente dos números é: %.1f e %.1f", num2, num1);					
	}	
	
	if (num2 > num1)
	{
		printf("A ordem crescente dos números é: %.1f e %1f", num1, num2);					
	}
	
	return 0;
}
