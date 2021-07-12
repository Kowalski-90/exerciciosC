#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float num1, num2, num3;
		
	printf("--- Qual o número repetido? ---\n");
	printf("-----------------------------\n");
	
	printf("Digite o primeiro número: ");	
	scanf("%f", &num1);
	
	printf("Digite o segundo número: ");	
	scanf("%f", &num2);
	
	printf("Digite o terceiro número: ");	
	scanf("%f", &num3);
	
	if (num1 == num2 || num1 == num3) {
		printf ("O número repetido é %.2f", num1);
	}
		else {
			if (num2 == num3) {
				printf ("O número repetido é o %.2f", num2);
			}
			else {
				printf ("Não há números repetidos");
			}
		}
			
}

