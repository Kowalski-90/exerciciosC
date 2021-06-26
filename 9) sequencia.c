#include <stdio.h>
#include <locale.h>
#define TAM 100

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Ocorr�ncia na sequ�ncia ---\n");
	printf("-------------------------------\n");
	
	int n, i, j, comprimento, conta, vezes;
	float sequencia[TAM];
	
	printf("\nDigite o n�mero de elementos da sequ�ncia: ");
	scanf("%d", &n);
	
	printf("Digite uma sequ�ncia de %d n�meros reais: ", n);
	
	for (i = 0; i < n; i++){
		scanf("%f", &sequencia[i]);	
	}
	
	printf("\nOcorr�ncias na sequ�ncia: ");
	  
	for (i = 0; i < n; i++) {	    
	  vezes = 1;
	  j = i + 1;
	  
	while (j < n)
	if (sequencia[j] != sequencia[i]) 
		j++; 
	    else {
	      vezes++;	
	      n--;                   
	      sequencia[j] = sequencia[n];       
        }      
    
	printf("\n%.2f ocorre %d vezes\n", sequencia[i], vezes);
	}
	  
  return 0; 
}

