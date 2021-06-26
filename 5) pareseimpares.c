#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- Pares e Ímpares ---\n");
	printf("-----------------------\n");
	
	int i, j = 0, A[10], A1[10], A2[10], aux, aux2;
	
	for (i = 1; i <= 10; i++){
		printf ("Digite um número para o VetorA[%i]: ", i);
		scanf ("%i", &A[i]);
	}
	
	printf("\nValores pares [A1] e ímpares [A2] digitados: \n");
	printf ("\nA1:");
	
	for (i = 0; i < 10; i++) {
		if (A[i] % 2 == 0){
			A1[j] = A[i];
			printf ("\n A1[%i] = %i", j, A1[j]);
			j++;	
		}
	}	
	printf ("\nA2:");
	
	for (i = 1; i <= 10; i++){
		if (A[i] % 2 != 0){
			A2[j] = A[i];
			printf ("\n A2[%i] = %i", j, A2[j]);
			j++;	
		}
	}
	
	return 0;
}
