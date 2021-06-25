#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	int ano_nasc, ano_atual, dias_vida;
	
	//Atribuição
	printf("--- Calculadora de dias de vida ---\n");
	printf("\nDigite o ano de nascimento ");
	scanf("%i", &ano_nasc);
	printf("Digite o ano atual ");
	scanf("%i", &ano_atual);	
	
	//Processamento e armazenamento 
	dias_vida = (ano_atual - ano_nasc) * 12 * 30;
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nSeus dias de vida até hoje são, aproximadamente, %i", dias_vida);
			
	return 0;
}
