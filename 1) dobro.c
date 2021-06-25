#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float numero, dobro;
	
	//Atribuição
	printf("--- Calculadora de dobros ---\n");
	printf("\nInsira um número: ", numero);
	scanf("%f", &numero);		
	
	//Processamento e armazenamento em soma do resultado
	dobro = numero * 2; 	
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nO dobro do número digitado é = %.1f", dobro);
			
	return 0;
}
