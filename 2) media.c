#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float numero1, numero2, media;
	
	//Atribuição
	printf("--- Calculadora de média entre dois valores ---\n");
	printf("\nDigite um número ");
	scanf("%f", &numero1);
	printf("Digite outro número ");
	scanf("%f", &numero2);	
	
	//Processamento e armazenamento 
	media = (numero1 + numero2) / 2.0;
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nA média entre os números digitados é = %.1f", media);
			
	return 0;
}
