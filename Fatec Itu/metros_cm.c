#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float numero_m, numero_cm;
	
	//Atribuição
	printf("--- Conversor de metros para centímetros ---\n");	
	printf("\nDigite o número em metro(s) ");
	scanf("%f", &numero_m);		
	
	//Processamento e armazenamento 
	numero_cm = numero_m * 100; 
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\n%.1f m equivale a %.1f cm", numero_m, numero_cm);
			
	return 0;
}
