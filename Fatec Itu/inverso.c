#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, A[10], B[10], C[i];
	
	printf("--- Ordem inversa ---\n");
	printf("---------------------\n");

	for(i = 0; i < 10; i++){
		printf("Digite um número para A[%i]", i);
		scanf("%i", &A[i]);
		if(A[i] == B[i]){
			B[i] = C[i];
		}	
	}	
	
	printf("\nValores normais:    ");
	for(i = 0; i < 10; i++){
		printf(" %i ", A[i]);
	}
	
	printf("\nValores invertidos: ");
	for(i = 0; i < 10; i++){
		B[i] = A[10-i-1];		
		printf(" %i ", B[i]);		
	}
		
	
	printf("\nPosições: C[%i] ", C[i]);	
	
	
	
	return 0;
}
