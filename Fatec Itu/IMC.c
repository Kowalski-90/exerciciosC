#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float peso, altura, imc;
		
	printf("--- Calculadora de IMC ---\n");
	printf("-----------------------------\n");
	
	printf("Digite o peso, em kg: ");	
	scanf("%f", &peso);
	
	printf("Digite a altura, em m: ");	
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5) {
		printf ("Abaixo do peso ideal");
    }
    	else {
    		if (imc >= 18.5 && imc <= 25.0) {
				printf ("Saudável");
			}
				else {
					if (imc >= 25.0 && imc <= 30.0) {
						printf ("Sobrepeso");
					}
						else {
							if (imc >= 30.0 && imc <=35.0) {
								printf ("Obesidade grau I");
							}
								else {
									if (imc >= 35.0 && imc <= 40.0){
										printf ("Obesidade grau II (severa)");
									}
										else{
											printf ("Obesidade grau III (mórbida)");
										}
								}
						}
				}
		}
		
}



