#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	float lado1, lado2, lado3;
	
	printf("--- Classificador de tri�ngulos ---\n");
	printf("-----------------------------\n");
	
	printf("Insira o valor do primeiro lado: ");
	scanf("%f", &lado1);
	printf("Insira o valor do segundo lado: ");
	scanf("%f", &lado2);
	printf("Insira o valor do terceiro lado: ");
	scanf("%f", &lado3);
	
	if (lado1 == lado2 && lado2 == lado3) {
		printf ("O tri�ngulo � equil�tero (todos os lados iguais)");
	}
		else {
			if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
				printf ("O tri�ngulo � is�sceles (dois lados iguais)");
			}
			else {
				printf ("O tri�ngulo � escaleno (lados com medidas diferentes)");
			}
		}
	
}
