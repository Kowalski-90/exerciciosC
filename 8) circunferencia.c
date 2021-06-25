#include <stdio.h>  // (biblioteca)
#include <locale.h> // (biblioteca para pt-br) --- > diretivas de pr� compila��o
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float circ, raio;
	
	//Atribui��o
	printf("--- Calculadora de per�metro de circunfer�ncias ---\n");
	printf("\nDigite o valor do raio da circunfer�ncia: ");
	scanf("%f", &raio);
		
	//Processamento e armazenamento 
	circ =  2 * 3.14 * raio; // (importante: ponto e n�o v�rgula para decimal!)
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nO per�metro da circunfer�ncia � = %.2f", circ);
			
	return 0;
}
