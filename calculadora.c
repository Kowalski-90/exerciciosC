#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int operacao;
	
	printf("--- Calculadora básica ---\n");
	printf("-----------------------------\n");			
	printf("Digite o primeiro número ");
	scanf("%f", &num1);	
	printf("Digite o segundo número ");
	scanf("%f", &num2);
	
	printf("\n--- Selecione a operação desejada ---\n");
	printf("[1] Adição [2] Subtração [3] Multiplicação [4] Divisão\n");	
	scanf("%i", &operacao);	
	
	if (operacao == 1) {
		resultado = num1 + num2;
		printf ("\nO resultado da soma entre %.2f e %.2f é: %.2f", num1, num2, resultado);
	}
		else {
		if (operacao == 2) {
			resultado = num1 - num2;
			printf ("\nO resultado da subtração entre %.2f e %.2f é: %.2f", num1, num2, resultado);
		}
			else {
			if (operacao == 3) {
				resultado = num1 * num2;
				printf ("\nO resultado da multiplicação entre %.2f e %.2f é: %.2f", num1, num2, resultado);
			}
				else {
				if (operacao == 4) {
					resultado = num1 / num2;
					printf ("\nO resultado da divisão entre %.2f e %.2f é: %.2f", num1, num2, resultado);
				}
					else {
					printf ("\nOpção inválida!");
				}
			}
		}
	}
	return 0;
}
