#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float numero, dobro;
	
	//Atribui��o
	printf("--- Calculadora de dobros ---\n");
	printf("\nInsira um n�mero: ", numero);
	scanf("%f", &numero);		
	
	//Processamento e armazenamento em soma do resultado
	dobro = numero * 2; 	
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nO dobro do n�mero digitado � = %.1f", dobro);
			
	return 0;
}
