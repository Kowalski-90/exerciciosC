#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Positivos ou negativos ---\n");
	printf("------------------------------\n");
	
	int i, quant_pos = 0, quant_neg = 0;
	float numero;	
	
	for (i = 0; i < 10; i++) {
		printf("Digite um n�mero: ");
		scanf("%f", &numero);
		
		if(numero > 0) {
			quant_pos++;
		}	
			else {
				if(numero < 0) {
					quant_neg++;
				}
			}
	}
	
	printf("Foram digitados %i n�meros negativos", quant_neg);
	printf("\nForam digitados %i n�meros positivos", quant_pos);
	
	return 0;
}
