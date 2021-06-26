#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Palíndromo numérico ---\n");
	printf("---------------------------\n");
	
	int i = 0, digitado[i], num, invertido, digito;
	 
	printf("Digite um número inteiro (sem vírgulas): ");
	scanf("%d",&digitado[i]);
	 
	num = digitado[i]; 
	invertido = 0;    
	 
	while(num != 0){
	   digito = num % 10; 
	   invertido = (invertido * 10) + digito;
	   num = num / 10;
	}
	 
	if(digitado[i] == invertido){
		printf("\nO número digitado é palíndromo");
	}	   
	else{
		printf("\nO número digitado não é palíndromo");
	}
	 
	return 0;    
}

