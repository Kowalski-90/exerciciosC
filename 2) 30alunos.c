#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("--- M�dias da turma de Algoritmos ---\n");
	printf("-----------------------------------\n");
	float media_t, media_l, media_f;
	int i;
	
	for (i = 1; i <=30; i++) {
		printf("\nInsira a m�dia de teoria do aluno %i: ", i);
		scanf("%f", &media_t);
		printf("Insira a m�dia de laborat�rio do aluno %i: ", i);
		scanf("%f", &media_l);
		media_f = media_t * 0.6 + media_l * 0.4;
		printf("\nA m�dia final do aluno %i foi de %.2f ", i, media_f);
		if(media_f >=7){
			printf("\nA m�dia final foi boa");				
		}
			else {
				if(media_f < 5) {
					printf("\nA m�dia final foi ruim");
				}
					else {
						printf("\nA m�dia final foi razo�vel");
					}
			}			
	}	
	return 0;
}
