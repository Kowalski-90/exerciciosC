#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	int numero1, numero2, divisao, resto;
	
	//Atribuição
	printf("--- Calculadora de divisão e resto ---\n");
	
	printf("\nDigite um número ");	
	scanf("%i", &numero1);
	
	printf("Digite outro número ");
	scanf("%i", &numero2);	
	
	//Processamento e armazenamento 
	divisao = numero1 / numero2;
	resto = numero1 % numero2;
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nO resultado da divisão é = %i", divisao);
	printf("\nO resto da divisão é = %i", resto);
			
	return 0;
}
