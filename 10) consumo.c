#include <stdio.h>  //(biblioteca)
#include <math.h>   //(biblioteca matemática)
#include <locale.h> //(biblioteca para pt-br)
 
int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda língua pra pt-br
	
	//Declaração de variáveis	
	float consumo_medio, dist_perc, comb_gasto;
	
	//Atribuição
	printf("--- Calculadora de consumo médio de combustível ---\n");
	printf("\nDigite a distância percorrida em km: ");
	scanf("%f", &dist_perc);
	printf("Digite a quantidade de combustível utilizada, em litros: ");
	scanf("%f", &comb_gasto);
			
	//Processamento e armazenamento 
	consumo_medio = dist_perc / comb_gasto;	
	
	//Saída do processamento
	printf("--------------------------------");
	printf("\nO consumo médio foi de = %.f km/L", consumo_medio);
			
	return 0;
}
