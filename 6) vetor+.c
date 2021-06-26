#include <stdio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Vetores positivos ---\n");
	printf("-------------------------\n");
	
	float vet[10], num, soma_impar = 0;
	int i;
	
	for(i = 1; i <= 10; i++){
		
		do{
			printf("Digite um valor para o vet[%i] ", i);
			scanf("%f", &num);
		}while(num <= 0);
		
		vet[i] = num; // Armazena em vet um valor positivo		
	}
		
	for(i = 1; i <= 10; i = i + 2){
		soma_impar = soma_impar + vet[i];
	}
	
	printf("\nSoma de ímpares = %.2f", soma_impar);
		
	return 0;
}
