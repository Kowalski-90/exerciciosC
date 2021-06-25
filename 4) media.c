#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float nota_p1, nota_p2, media;
		
	printf("--- Média semestral ---\n");
	printf("-----------------------------\n");
	printf("Digite a nota da P1: ");	
	scanf("%f", &nota_p1);
	printf("Digite a nota da P2: ");
	scanf("%f", &nota_p2);
	
	media = (nota_p1 + nota_p2) / 2;
	
	if (media >= 5)
	{
		printf("Parabéns! Você foi aprovado!");				
	}
	else 
	{		
	printf("Você foi reprovado! Faltaram %.2f pontos para atingir a média", (media-5)*-1);
	}
		
	return 0;
}
