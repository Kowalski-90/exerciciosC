#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Operação com vetores ---\n");
	printf("----------------------------\n");
	
	float vetorA[12], vetorB[12];
	int i;
	
	for (i = 1; i <= 12; i++){
		printf("Digite o valor do vetorA[%i]: ", i);
		scanf("%f", &vetorA[i]);	
	}
	
	for (i = 1; i <= 12; i++){
		if(i % 2 == 0){
			vetorB[i] = vetorA[i] / 2;
		}
			else {
				vetorB[i] = vetorA[i] * 3;
			}		
		
	printf("\nVetorB[%i] = %.2f", i, vetorB[i]);		
	}
		
	return 0;
}
