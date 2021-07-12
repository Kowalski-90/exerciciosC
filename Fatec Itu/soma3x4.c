#include <stdio.h>
#include <locale.h>
#define lin 3
#define col 4

int main() {
	setlocale(LC_ALL,"Portuguese");	
	
	int mat[lin][col];
	int i, j, soma;	
	
	printf("--- Soma da matriz 3 x 4 ---\n");
	printf("----------------------------\n");
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("Digite um valor para a matriz[%i][%i] ", i, j);
			scanf("%i", &mat[i][j]);			
		}		
	}
	
	printf("\n");
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("m[%i][%i] = %i  ", i, j, mat[i][j]);
			soma = soma + mat[i][j];			
		}
		printf("\n");
	}	
	
	printf("\nA soma dos elementos da matriz é %i", soma);
		
	return 0;
}

