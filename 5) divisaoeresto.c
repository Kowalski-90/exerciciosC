#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	int numero1, numero2, divisao, resto;
	
	//Atribui��o
	printf("--- Calculadora de divis�o e resto ---\n");
	
	printf("\nDigite um n�mero ");	
	scanf("%i", &numero1);
	
	printf("Digite outro n�mero ");
	scanf("%i", &numero2);	
	
	//Processamento e armazenamento 
	divisao = numero1 / numero2;
	resto = numero1 % numero2;
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nO resultado da divis�o � = %i", divisao);
	printf("\nO resto da divis�o � = %i", resto);
			
	return 0;
}
