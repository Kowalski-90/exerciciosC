#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float base, altura, area;
	
	//Atribui��o
	printf("--- Calculadora de �rea de tri�ngulos ---\n");
	printf("\nDigite o valor da base do tri�ngulo ");
	scanf("%f", &base);
	printf("Agora, digite o valor da altura do tri�ngulo ");
	scanf("%f", &altura);
		
	//Processamento e armazenamento 
	area = (base * altura) / 2;
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nA �rea do tri�ngulo � = %.1f", area);
			
	return 0;
}
