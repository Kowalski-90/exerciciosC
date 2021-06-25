#include <stdio.h>  //(biblioteca)
#include <math.h>   //(biblioteca matem�tica)
#include <locale.h> //(biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float num, raiz;
	
	//Atribui��o
	printf("--- Calculadora de raiz quadrada e oitava pot�ncia ---\n");
	printf("\nDigite um numero: ");
	scanf("%f", &num);
			
	//Processamento e armazenamento 
	double sqrt(double num);// fun��o que calcula a raiz quadrada
	double pow(double x, double y); // fun��o que calcula a pot�ncia	
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nA raiz quadrada de %.lf � = %.2lf", num, sqrt(num));
	printf("\nA oitava pot�ncia de %.f � = %.lf  ", num, pow(num, 8));
			
	return 0;
}
