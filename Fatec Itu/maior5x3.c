#include <stdio.h>
#include <locale.h>
#define lin 5
#define col 3

int main() {
	setlocale(LC_ALL,"Portuguese");	
	
	int mat[lin][col];
	int i, j, maior;	
	
	printf("--- Maior elemento 5 x 3 ---\n");
	printf("----------------------------\n");
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("Digite um valor para a matriz[%i][%i] ", i, j);
			scanf("%i", &mat[i][j]);
			if(mat[i][j] > maior){
				maior = mat[i][j];
			}
		}							
	}	
	
	printf("\n");
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("m[%i][%i] = %i  ", i, j, mat[i][j]);						
		}
		printf("\n");
	}	
	
	printf("\nO maior elemento da matriz é %i", maior);
		
	return 0;
}
