#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float num1, num2, num3;
		
	printf("--- Qual o n�mero repetido? ---\n");
	printf("-----------------------------\n");
	
	printf("Digite o primeiro n�mero: ");	
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero: ");	
	scanf("%f", &num2);
	
	printf("Digite o terceiro n�mero: ");	
	scanf("%f", &num3);
	
	if (num1 == num2 || num1 == num3) {
		printf ("O n�mero repetido � %.2f", num1);
	}
		else {
			if (num2 == num3) {
				printf ("O n�mero repetido � o %.2f", num2);
			}
			else {
				printf ("N�o h� n�meros repetidos");
			}
		}
			
}

