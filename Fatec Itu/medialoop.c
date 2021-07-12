#include <stdio.h>
#include <locale.h>
#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, decisao;
	float numero, maior_num, soma = 0, media;
	
	printf("--- Média numérica ---\n");
	printf("----------------------\n");
	
	i=0;
	while (i < TAM) {
		printf("\nDigite um número para formar a média: ");
		scanf("%f", &numero);
		
		soma = soma + numero;
		i++;
		
		if(i == 0) {
			maior_num = numero;		
   		}
   		
   		if(numero > maior_num) {
   			maior_num = numero;
		   }
		
		printf("\nDeseja informar mais um número? [1] Sim [2] Não");
		scanf("%i", &decisao);
		
			if (decisao == 2) {
				media = soma / TAM;
				printf("\nA média dos números digitados é = %.2f", media);
				printf("\nO maior número digitado foi %.2f", maior_num);
				exit(0);
			}				
	}
	
	media = soma / TAM;
	printf("\nA média dos números digitados é = %.2f", media);
	printf("\nO maior número digitado foi %.2f", maior_num);
	
		
	return 0;
}
