#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br

	//Declaração de variáveis	
	float temp_f, temp_c;
	
	//Atribuição
	printf("--- Conversor de Fahrenheit para Celsius ---\n");
	printf("\nDigite a temperatura em Fahrenheit (°F): ");
	scanf("%f", &temp_f);
	
	//Processamento e armazenamento 
	temp_c = (temp_f - 32) / 1.8;
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nA temperatura em Celsius é de %.1f °C", temp_c);
			
	return 0;
}
