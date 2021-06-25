#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float base, altura, area;
	
	//Atribuição
	printf("--- Calculadora de área de triângulos ---\n");
	printf("\nDigite o valor da base do triângulo ");
	scanf("%f", &base);
	printf("Agora, digite o valor da altura do triângulo ");
	scanf("%f", &altura);
		
	//Processamento e armazenamento 
	area = (base * altura) / 2;
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nA área do triângulo é = %.1f", area);
			
	return 0;
}
