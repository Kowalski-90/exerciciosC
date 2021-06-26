#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Pal�ndromo num�rico ---\n");
	printf("---------------------------\n");
	
	int i = 0, digitado[i], num, invertido, digito;
	 
	printf("Digite um n�mero inteiro (sem v�rgulas): ");
	scanf("%d",&digitado[i]);
	 
	num = digitado[i]; 
	invertido = 0;    
	 
	while(num != 0){
	   digito = num % 10; 
	   invertido = (invertido * 10) + digito;
	   num = num / 10;
	}
	 
	if(digitado[i] == invertido){
		printf("\nO n�mero digitado � pal�ndromo");
	}	   
	else{
		printf("\nO n�mero digitado n�o � pal�ndromo");
	}
	 
	return 0;    
}

