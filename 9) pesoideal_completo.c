#include <stdio.h>
#include <locale.h>

int main () {	
	setlocale (LC_ALL, "Portuguese");
	int idade;
	float peso, altura, sexo, peso_ideal, peso_ideal_max, peso_ideal_min;
	
	printf("--- Peso ideal ---\n");
	printf("-----------------------------\n");
	
	printf("Insira a sua idade: ");
	scanf("%i", &idade);
	
	if (idade < 12 || idade > 65) {
		printf("Idade incompat�vel");
	}
		else {
			printf("Insira o seu peso atual, em kg: ");
			scanf("%f", &peso);
			printf("Insira a sua altura atual, em m: ");
			scanf("%f", &altura);
			printf("Insira o seu sexo biol�gico: [1] Masculino [2] Feminino ");
			scanf("%f", &sexo);
			
				if (sexo == 1) {
				peso_ideal = (72.7 * altura) - 62;
				peso_ideal_max = peso_ideal * 0.05 + peso_ideal;
				peso_ideal_min = (peso_ideal * 0.05 - peso_ideal) * -1;
				printf("O seu peso ideal � entre %.2f e %.2f kg", peso_ideal_min, peso_ideal_max);
				}
					else {
						peso_ideal = (62.1 * altura) - 48.7;
						peso_ideal_max = peso_ideal * 0.05 + peso_ideal;
						peso_ideal_min = (peso_ideal * 0.05 - peso_ideal) * -1;
						printf("O seu peso ideal � entre %.2f kg e %.2f kg", peso_ideal_min, peso_ideal_max);
					}	
						if (peso > peso_ideal) {
							printf ("\nVoc� est� acima de seu peso ideal");
						}
							else {
								printf("\nVoc� est� abaixo de seu peso ideal");
							}
								if (idade >= 12 && idade <= 17) {
									printf("\nVoc� � adolescente");
								}
									else {
										if (idade >= 18 && idade <= 25) {
											printf("\nVoc� � jovem");
										}
											else {
												printf("\nVoc� � adulto(a)");
											}
									}
		}	
}
