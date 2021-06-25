#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float numero_m, numero_cm;
	
	//Atribui��o
	printf("--- Conversor de metros para cent�metros ---\n");	
	printf("\nDigite o n�mero em metro(s) ");
	scanf("%f", &numero_m);		
	
	//Processamento e armazenamento 
	numero_cm = numero_m * 100; 
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\n%.1f m equivale a %.1f cm", numero_m, numero_cm);
			
	return 0;
}
