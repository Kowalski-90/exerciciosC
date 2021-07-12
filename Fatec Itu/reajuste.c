#include <stdio.h>
#include <locale.h>

/*Faça um programa que calcule reajustes 
salariais de acordos com faixas pré-estabelecidas
e mostre os valores reajustados, o diferencial 
de reajuste e o equivalente em percentual
*/
 
int main() {
 	
   setlocale (LC_ALL, "Portuguese"); 	 	
   float salario, novo_salario;
   printf("Insira o valor do salário R$ ");   
   scanf("%f", &salario);
   
   if(salario > 0 && salario <= 400){
   		novo_salario = salario * 0.15 + salario;
   		printf("Novo salário: R$ %.2f\nReajuste ganho: R$ %.2f\nEm percentual: 15 %%\n", novo_salario, novo_salario - salario);
   }
		else{
			if(salario > 400.01 && salario <= 800){
				novo_salario = salario * 0.12 + salario;
				printf("Novo salário: R$ %.2f\nReajuste ganho: R$ %.2f\nEm percentual: 12 %%\n", novo_salario, novo_salario - salario);
				
			}
				else{
					if(salario > 800.01 && salario <= 1200){
						novo_salario = salario * 0.10 + salario;
						printf("Novo salário: R$ %.2f\nReajuste ganho: R$ %.2f\nEm percentual: 10 %%\n", novo_salario, novo_salario - salario);
					}
						else{
							if(salario > 1200.01 && salario <= 2000){
								novo_salario = salario * 0.07 + salario;
								printf("Novo salário: R$ %.2f\nReajuste ganho: R$ %.2f\nEm percentual: 7 %%\n", novo_salario, novo_salario - salario);
							}
								else{
									novo_salario = salario * 0.04 + salario;
									printf("Novo salário: R$ %.2f\nReajuste ganho: R$ %.2f\nEm percentual: 4 %%\n", novo_salario, novo_salario - salario);
								}
						}
				}
		} 
   
   return 0;
}
