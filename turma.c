#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--- MÉDIA DA TURMA DE ADS ---\n");
	printf("-------------------------------------------\n");
	
	int i, j, qtde_alunos, qtde_disciplinas;
	float nota, notas, media;
	
	printf("Digite a quantidade de alunos do 3º semestre: ");
	scanf("%i", &qtde_alunos);	
	
	for (i = 1; i <= qtde_alunos; i++) {
	
		notas = 0;
		media = 0;
				
		printf("\nDigite a quantidade de disciplinas cursadas pelo aluno %i ", i);
		scanf("%i", &qtde_disciplinas);
		
		for (j = 1; j <= qtde_disciplinas; j++) {		
			printf("\nDigite a média da disciplina %i ", j);
			scanf("%f", &nota);
			
			notas = notas + nota;
		}			
		
		printf("\nA média do aluno %i foi de %.2f", i, notas / qtde_disciplinas);
	}		
	return 0;
}
