#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- Tabuada de 1 a 10 ---\n");
	printf("-------------------------\n");
	int num_tabuada, num_multiplicado;
	int i;
	
	printf("Você deseja calcular a tabuada de qual número? ");
	scanf("%i", &num_tabuada);
	for (i = 0; i <= 10; i++) {
		num_multiplicado = num_tabuada * i;		
		printf("\n[%i x %i]= %i ", num_tabuada, i, num_multiplicado);
	}
	
	return 0;
}
