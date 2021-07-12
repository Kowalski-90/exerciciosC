#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- Masculino ou feminino? ---\n");
	printf("------------------------------\n");
	
	int i, sexo, sexo_alt, pessoas = 15;
	float altura, menor_altura = 10, maior_altura = 0, soma_alturas_f, media_altura_mulheres, somaf, somam;
	
	for (i = 1; i <= pessoas; i++) {
		
		printf("Digite o sexo biológico: [1] Masculino [2] Feminino ");
		scanf("%i", &sexo);	
		printf("Digite a altura em metros: ");
		scanf("%f", &altura);
		
		if (sexo == 2) {			
			soma_alturas_f = soma_alturas_f + altura;
			somaf++;
		}
			else {
				somam++;
			}		
		
		if (altura < menor_altura) {
			menor_altura = altura;
		}
		
		if (altura > maior_altura) {
			maior_altura = altura;
			sexo_alt = sexo;
		}
		
	}	
	
		if (sexo_alt == 1) {
			printf("\nA pessoa mais alta do grupo tem %.2f m e é do sexo masculino", maior_altura);
		}
		
			else {
				printf ("\nA pessoa mais alta do grupo tem %.2f m e é do sexo feminino", maior_altura);
			}
			
	
	media_altura_mulheres = soma_alturas_f / somaf;
	
	printf("\nA menor altura é: %.2f m", menor_altura);
	printf("\nA média de altura das mulheres é: %.2f m", media_altura_mulheres);
	printf("\nO número total de homens no grupo é de: %.0f", somam);
	
	return 0;
}
