#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	
	printf("--- ELEI��ES MUNICIPAIS - BOR� / SP ---\n");
	printf("---------------------------------------\n");
	
	int voto, votos_jose, votos_maria, votos_joao, brancos, nulos, votos_vencedor = 0;
	float porcentagem_eleitores, total_eleitores;
	
	do {
		printf("\nVote conforme as op��es dispon�veis: [1] Jos� [2] Maria [3] Jo�o [4] Branco [5] Nulo [0] Sair");
		printf("\nOp��o escolhida: ");
		scanf("%i", &voto);
		total_eleitores++;
	
		if(voto == 1) {
			votos_jose++;
			if(votos_jose > votos_vencedor) {
				votos_vencedor = votos_jose;
			}
		}
		
			if(voto == 2) {
				votos_maria++;
				if(votos_maria > votos_vencedor) {
					votos_vencedor = votos_maria;
				}
			}
				
				if(voto == 3) {
					votos_joao++;
					if(votos_joao > votos_vencedor) {
						votos_vencedor = votos_joao;
					}
				}
					
					if(voto == 4) {
						brancos++;
						if(brancos > votos_vencedor) {
							votos_vencedor = brancos;
						}
					}
					
						if(voto == 5) {
							nulos++;
							if(nulos > votos_vencedor) {
								votos_vencedor = nulos;
							}
						}
						
	} while (voto != 0);
	
	porcentagem_eleitores = (votos_vencedor / total_eleitores) * 100;
	
	printf("\n ---  RESULTADO FINAL   ---");
	printf("\n ---  VOTOS JOS�: %i    ---", votos_jose);
	printf("\n ---  VOTOS MARIA: %i   ---", votos_maria);
	printf("\n ---  VOTOS JO�O: %i    ---", votos_joao);
	printf("\n ---  VOTOS BRANCOS: %i ---", brancos);
	printf("\n ---  VOTOS NULOS: %i   ---", nulos);
	
		if(votos_jose == votos_vencedor) {
			printf("\nO(a) candidato(a) mais votado(a) foi Jos� com %.2f por cento dos votos", porcentagem_eleitores);
			printf("\nO(a) candidato(a) recebeu %i votos v�lidos", votos_jose);
		}
			else {
				if(votos_maria == votos_vencedor) {
					printf("\nO(a) candidato(a) mais votado(a) foi Maria com %.2f por cento dos votos", porcentagem_eleitores);
					printf("\nO(a) candidato(a) recebeu %i votos v�lidos", votos_maria);
				}
					else {
						printf("\nO(a) candidato(a) mais votado(a) foi Jo�o com %.2f por cento dos votos", porcentagem_eleitores);
						printf("\nO(a) candidato(a) recebeu %i votos v�lidos", votos_joao);
					}
			}
	
	return 0;
}
