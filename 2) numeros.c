#include <stdio.h>
#include <locale.h>
#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, decisao;
	float numero, maior_num, soma = 0, media;
	
	printf("--- M�dia num�rica ---\n");
	printf("----------------------\n");
	
	i=0;
	while (i < TAM) {
		printf("\nDigite um n�mero para formar a m�dia: ");
		scanf("%f", &numero);
		
		soma = soma + numero;
		i++;
		
		if(i == 0) {
			maior_num = numero;		
   		}
   		
   		if(numero > maior_num) {
   			maior_num = numero;
		   }
		
		printf("\nDeseja informar mais um n�mero? [1] Sim [2] N�o");
		scanf("%i", &decisao);
		
			if (decisao == 2) {
				media = soma / TAM;
				printf("\nA m�dia dos n�meros digitados � = %.2f", media);
				printf("\nO maior n�mero digitado foi %.2f", maior_num);
				exit(0);
			}				
	}
	
	media = soma / TAM;
	printf("\nA m�dia dos n�meros digitados � = %.2f", media);
	printf("\nO maior n�mero digitado foi %.2f", maior_num);
	
		
	return 0;
}
