#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- M�dia aritm�tica ---\n");
	printf("-------------------------\n");
	
	int i, tamanho;
	float numeros, soma, media;
	
	printf("Quantos n�meros voc� deseja digitar? ");
	scanf("%i", &tamanho);
	soma = 0;
	printf("Quais s�o os n�meros? ", tamanho);	
	
	for (i = 0; i < tamanho; i++) {
		scanf("%f", &numeros);
		soma = soma + numeros;
	}
	
	media = soma / tamanho;
	printf("\nA m�dia aritm�tica dos n�meros solicitados � = %.2f", media);
	
	return 0;
}
