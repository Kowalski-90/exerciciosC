#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- PREFEITURA DE SERRA DA SAUDADE - MG ---\n");
	printf("-------------------------------------------\n");
	
	int i, filhos, soma_filhos, habitantes = 15;
	float salario, maior_salario, aux_salario, percentual, soma_salarios = 0;
	
	for (i = 1; i <= habitantes; i++) {
		printf("Digite o n�mero de filhos do habitante %i: ", i);
		scanf("%i", &filhos);
		printf("Digite o sal�rio do habitante %i: R$ ", i);
		scanf("%f", &salario);
		
		soma_salarios = soma_salarios + salario;
		soma_filhos = soma_filhos + filhos;
		
		if(i == 0) {
			maior_salario = salario;
		}				
			
		if(salario > maior_salario) {
			maior_salario = salario;
		}
		
		if(salario <= 500) {
			salario = aux_salario++;
		}	
			
	}		
	
	printf("\nO maior sal�rio � de: R$ %.2f", maior_salario);
	printf("\nA m�dia salarial � de: R$ %.2f", soma_salarios / habitantes);
	printf("\nA m�dia de filhos � de %i filhos por casal", soma_filhos / habitantes);
	printf("\nA porcentagem de habitantes que ganha at� R$ 500,00 � de %.2f porcento", (aux_salario * 100) / habitantes);
	
	return 0;
			
}
	
	
