#include <stdio.h>
#include <locale.h>

int main () {	
	setlocale(LC_ALL, "Portuguese");	
	
	printf("--- Maior e menor ---\n");
	printf("---------------------\n");
	
	int i, maior_num, menor_num, numero;
	i = 0;
	
	for (i = 0; i < 10 ; i++) {
		printf ("Digite um n�mero: ");
		scanf ("%i", &numero);
	
		if(i == 0) {
			maior_num = numero;
			menor_num = numero;
   		}
    
    	else {
    		if (numero > maior_num) {
    			maior_num = numero;
			}
				else {
					if (numero < menor_num) {
						menor_num = numero;
					}
				}
		}	
	}		
	
	printf("\nO maior n�mero digitado foi %i", maior_num);
	printf("\nO menor n�mero digitado foi %i", menor_num);
	
	return 0;
}
	


