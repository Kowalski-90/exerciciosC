#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float nota_p1, nota_p2, media;
		
	printf("--- M�dia semestral ---\n");
	printf("-----------------------------\n");
	printf("Digite a nota da P1: ");	
	scanf("%f", &nota_p1);
	printf("Digite a nota da P2: ");
	scanf("%f", &nota_p2);
	
	media = (nota_p1 + nota_p2) / 2;
	
	if (media >= 5)
	{
		printf("Parab�ns! Voc� foi aprovado!");				
	}
	else 
	{		
	printf("Voc� foi reprovado! Faltaram %.2f pontos para atingir a m�dia", (media-5)*-1);
	}
		
	return 0;
}
