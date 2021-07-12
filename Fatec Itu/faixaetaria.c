#include <stdio.h>
#include <locale.h>

/*Crie um programa que identifique e classifique
o usuário de acordo com a idade digitada*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("--- Faixa etária ---\n");
	printf("--------------------\n");
	
	printf("Insira a sua idade em anos: ");
	scanf("%i", &idade);
	printf("A idade digitada foi %i ", idade);
	printf("\n--------------------------");
	printf("\nVocê é um(a) ");
	
	if(idade >= 0 && idade <= 2){
		printf("bebê");
	}
		else{
			if(idade >= 3 && idade <= 12){
				printf("criança");
			}
				else{
					if(idade >= 13 && idade <= 17){
						printf("adolescente");
					}
						else{
							if(idade >= 18 && idade <= 59){
								printf("adulto");
							}
								else{
									printf("idoso");
								}
						}
				}			
		}
				
	return 0;
}
