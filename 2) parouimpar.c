#include <stdio.h>
#include <locale.h>
#define TAM 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Par ou �mpar ---\n");
	printf("--------------------\n");
	
	int i, A[10], pares = 0, impares = 0, media, soma_pares, prod_impares = 1;
	
	for(i = 1; i <= TAM; i++) {
		printf("\nDigite um n�mero para o %i� valor: ", i);
		scanf("%i", &A[i]);	
	}
	
	for(i = 1; i <= TAM; i++) {		
		if(i % 2 == 0) {
			pares++;
			soma_pares = soma_pares + A[i];					
		}
			else {								
				prod_impares = prod_impares * A[i];				
			}
	}
	
	media = soma_pares / pares;		
	printf("\nA m�dia dos elementos de �ndices pares foi %i", media);	
	printf("\nO produto dos elementos de �ndices �mpares foi %i", prod_impares);	
	
	return 0;	
}
