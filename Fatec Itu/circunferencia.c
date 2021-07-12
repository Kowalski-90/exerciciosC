#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br) --- > diretivas de pré compilação
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float circ, raio;
	
	//Atribuição
	printf("--- Calculadora de perímetro de circunferências ---\n");
	printf("\nDigite o valor do raio da circunferência: ");
	scanf("%f", &raio);
		
	//Processamento e armazenamento 
	circ =  2 * 3.14 * raio; // (importante: ponto e não vírgula para decimal!)
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nO perímetro da circunferência é = %.2f", circ);
			
	return 0;
}
