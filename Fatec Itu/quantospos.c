#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Positivos ou negativos ---\n");
	printf("------------------------------\n");
	
	int i, quant_pos = 0, quant_neg = 0;
	float numero;	
	
	for (i = 0; i < 10; i++) {
		printf("Digite um número: ");
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
	
	printf("Foram digitados %i números negativos", quant_neg);
	printf("\nForam digitados %i números positivos", quant_pos);
	
	return 0;
}
