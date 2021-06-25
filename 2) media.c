#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float numero1, numero2, media;
	
	//Atribui��o
	printf("--- Calculadora de m�dia entre dois valores ---\n");
	printf("\nDigite um n�mero ");
	scanf("%f", &numero1);
	printf("Digite outro n�mero ");
	scanf("%f", &numero2);	
	
	//Processamento e armazenamento 
	media = (numero1 + numero2) / 2.0;
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nA m�dia entre os n�meros digitados � = %.1f", media);
			
	return 0;
}
