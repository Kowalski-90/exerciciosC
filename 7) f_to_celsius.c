#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br

	//Declara��o de vari�veis	
	float temp_f, temp_c;
	
	//Atribui��o
	printf("--- Conversor de Fahrenheit para Celsius ---\n");
	printf("\nDigite a temperatura em Fahrenheit (�F): ");
	scanf("%f", &temp_f);
	
	//Processamento e armazenamento 
	temp_c = (temp_f - 32) / 1.8;
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nA temperatura em Celsius � de %.1f �C", temp_c);
			
	return 0;
}
