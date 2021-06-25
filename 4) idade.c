#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	int ano_nasc, ano_atual, dias_vida;
	
	//Atribui��o
	printf("--- Calculadora de dias de vida ---\n");
	printf("\nDigite o ano de nascimento ");
	scanf("%i", &ano_nasc);
	printf("Digite o ano atual ");
	scanf("%i", &ano_atual);	
	
	//Processamento e armazenamento 
	dias_vida = (ano_atual - ano_nasc) * 12 * 30;
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nSeus dias de vida at� hoje s�o, aproximadamente, %i", dias_vida);
			
	return 0;
}
