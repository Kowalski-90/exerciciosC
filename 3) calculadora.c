#include <stdio.h>
#include <locale.h>
#define TAM 5

int main () {
	setlocale (LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int i, operacao, decisao;
	
	printf("--- Calculadora b�sica ---\n");
	printf("--------------------------\n");			
	
	
	i = 0;
	while (i < TAM) {
		
		printf("\nDigite o primeiro n�mero ");
		scanf("%f", &num1);	
		printf("Digite o segundo n�mero ");
		scanf("%f", &num2);
		
		printf("\n--- Selecione a opera��o desejada ---\n");
		printf("[1] Adi��o [2] Subtra��o [3] Multiplica��o [4] Divis�o\n");	
		scanf("%i", &operacao);	
	
	if (operacao == 1) {
		resultado = num1 + num2;
		printf ("\nO resultado da soma entre %.2f e %.2f �: %.2f", num1, num2, resultado);
	}
		else {
		if (operacao == 2) {
			resultado = num1 - num2;
			printf ("\nO resultado da subtra��o entre %.2f e %.2f �: %.2f", num1, num2, resultado);
		}
			else {
			if (operacao == 3) {
				resultado = num1 * num2;
				printf ("\nO resultado da multiplica��o entre %.2f e %.2f �: %.2f", num1, num2, resultado);
			}
				else {
				if (operacao == 4) {
					resultado = num1 / num2;
					printf ("\nO resultado da divis�o entre %.2f e %.2f �: %.2f", num1, num2, resultado);
				}
					else {
					printf ("\nOp��o inv�lida!");
				}
			}
		}
	}	
		printf("\nDeseja continuar calculando? [1] Sim [2] N�o");
		scanf("%i", &decisao);
		
		if (decisao == 2) {
			exit(0);
		}	
	}
	return 0;
}
