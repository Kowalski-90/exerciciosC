#include <stdio.h>
#include <locale.h>
#define lin 3
#define col 3

int main() {
	setlocale(LC_ALL,"Portuguese");	
	
	int i, j, mat[lin][col], dobro[lin][col];		
	
	printf("--- Matriz 3 x 3 dobrada ---\n");
	printf("----------------------------\n");
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("Digite um valor para a matriz[%i][%i] ", i, j);
			scanf("%i", &mat[i][j]);
			dobro[i][j] = (mat[i][j]) * 2;			
		}							
	}	
	
	printf("\n");	
	printf("\nValores em dobro da matriz 3 x 3: ");
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("\nm[%i][%i] = %i  ", i, j, dobro[i][j]);						
		}
		printf("\n");
	}	
		
	return 0;
}
