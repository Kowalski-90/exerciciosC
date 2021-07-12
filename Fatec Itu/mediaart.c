#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- Média aritmética ---\n");
	printf("-------------------------\n");
	
	int i, tamanho;
	float numeros, soma, media;
	
	printf("Quantos números você deseja digitar? ");
	scanf("%i", &tamanho);
	soma = 0;
	printf("Quais são os números? ", tamanho);	
	
	for (i = 0; i < tamanho; i++) {
		scanf("%f", &numeros);
		soma = soma + numeros;
	}
	
	media = soma / tamanho;
	printf("\nA média aritmética dos números solicitados é = %.2f", media);
	
	return 0;
}
