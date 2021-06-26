#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- Médias da turma de Algoritmos ---\n");
	printf("-----------------------------------\n");
	float media_t, media_l, media_f;
	int i;
	
	for (i = 1; i <=30; i++) {
		printf("\nInsira a média de teoria do aluno %i: ", i);
		scanf("%f", &media_t);
		printf("Insira a média de laboratório do aluno %i: ", i);
		scanf("%f", &media_l);
		media_f = media_t * 0.6 + media_l * 0.4;
		printf("\nA média final do aluno %i foi de %.2f ", i, media_f);
		if(media_f >=7){
			printf("\nA média final foi boa");				
		}
			else {
				if(media_f < 5) {
					printf("\nA média final foi ruim");
				}
					else {
						printf("\nA média final foi razoável");
					}
			}			
	}	
	return 0;
}
