#include <stdio.h>  //(biblioteca)
#include <math.h>   //(biblioteca matemática)
#include <locale.h> //(biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float num, raiz;
	
	//Atribuição
	printf("--- Calculadora de raiz quadrada e oitava potência ---\n");
	printf("\nDigite um numero: ");
	scanf("%f", &num);
			
	//Processamento e armazenamento 
	double sqrt(double num);// função que calcula a raiz quadrada
	double pow(double x, double y); // função que calcula a potência	
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nA raiz quadrada de %.lf é = %.2lf", num, sqrt(num));
	printf("\nA oitava potência de %.f é = %.lf  ", num, pow(num, 8));
			
	return 0;
}
