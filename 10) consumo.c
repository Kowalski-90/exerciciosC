#include <stdio.h>  //(biblioteca)
#include <math.h>   //(biblioteca matem�tica)
#include <locale.h> //(biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	float consumo_medio, dist_perc, comb_gasto;
	
	//Atribui��o
	printf("--- Calculadora de consumo m�dio de combust�vel ---\n");
	printf("\nDigite a dist�ncia percorrida em km: ");
	scanf("%f", &dist_perc);
	printf("Digite a quantidade de combust�vel utilizada, em litros: ");
	scanf("%f", &comb_gasto);
			
	//Processamento e armazenamento 
	consumo_medio = dist_perc / comb_gasto;	
	
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nO consumo m�dio foi de = %.f km/L", consumo_medio);
			
	return 0;
}
