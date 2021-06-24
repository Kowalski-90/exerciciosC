#include <stdio.h>  //(biblioteca)
#include <locale.h> //(biblioteca para pt-br)

/*
Desenvolva uma aplica��o que receba a quantidade de homens, mulheres
e crian�as que ir�o participar de um churrasco.
O seu churrasco dever� ter 10 itens, entre comidas e bebidas.
Calcule e  mostre a quantidade de itens que dever�o ser comprados, considerando que homens, 
mulheres e crian�as consomem esses itens de formas diferentes. 
Por exemplo, homens bebem mais cerveja que mulheres na m�dia. Crian�as n�o consomem cerveja. etc.
No final, mostrar uma lista de compras com o total de cada item em quilos, litros ou unidades.
*/

int main(void) 
{ 
	setlocale (LC_ALL, "Portuguese"); // muda l�ngua pra pt-br
	
	//Declara��o de vari�veis	
	int num_homens, num_mulheres, num_criancas;
	
	float carne_homens, carne_mulheres, carne_criancas, cerv_homens, cerv_mulheres, refri_homens, refri_mulheres, refri_criancas,
	alho_homens, alho_mulheres, alho_criancas, arroz_homens, arroz_mulheres, arroz_criancas, maio_homens, maio_mulheres, maio_criancas,
	soma_carnes, soma_outras_carnes, soma_cerv, soma_refri, soma_alho, soma_arroz, soma_maio, bovino, frango, porco, coracao, linguica;
		
	//Atribui��o
	printf("--- Lista de compras para churrasco ---\n");
	printf("\nInsira o n�mero de homens: ");
	scanf("%i", &num_homens);
	printf("Insira o n�mero de mulheres: ");
	scanf("%i", &num_mulheres);
	printf("Insira o n�mero de crian�as: ");
	scanf("%i", &num_criancas);	
			
	//Processamento e armazenamento 
	carne_homens = num_homens * 0.5;
	carne_mulheres = num_mulheres * 0.3;
	carne_criancas = num_criancas * 0.15;
	
	cerv_homens = num_homens * 5;
	cerv_mulheres = num_mulheres * 3;
	
	refri_homens = num_homens * 0.5;
	refri_mulheres = num_mulheres * 0.5;
	refri_criancas = num_criancas * 1.0;
	
	alho_homens = num_homens * 3;
	alho_mulheres = num_mulheres * 2;
	alho_criancas = num_criancas * 1;
	
	arroz_homens = num_homens * 0.30;
	arroz_mulheres = num_mulheres * 0.15;
	arroz_criancas = num_criancas * 0.05;
	
	maio_homens = num_homens * 0.1;
	maio_mulheres = num_mulheres * 0.05;
	maio_criancas = num_criancas * 0.03;
	
	soma_carnes = carne_homens + carne_mulheres + carne_criancas;
	
	bovino = soma_carnes * 0.5240;
	frango = soma_carnes * 0.1525;
	porco = soma_carnes * 0.1210;
	coracao = soma_carnes * 0.0655;
	linguica = soma_carnes * 0.1370;
	
	soma_cerv = cerv_homens + cerv_mulheres;
	
	soma_refri = refri_homens + refri_mulheres + refri_criancas;
	
	soma_arroz = arroz_homens + arroz_mulheres + arroz_criancas;
	
	soma_maio = maio_homens + maio_mulheres + maio_criancas;
	
	soma_alho = alho_homens + alho_mulheres + alho_criancas;
		
	//Sa�da do processamento
	printf("--------------------------------");
	printf("\nA quantidade total de carne � = %.3f kg, sendo, aproximadamente: \n", soma_carnes);
	printf("\n%.3f kg de carne de boi (alcatra, picanha, contra fil�, costela)", bovino);
	printf("\n%.3f kg de carne de frango (coxa e sobrecoxa)", frango);
	printf("\n%.3f kg de carne de porco (panceta)", porco);
	printf("\n%.3f kg de cora��o de frango", coracao);
	printf("\n%.3f kg de lingui�a (toscana, frango)", linguica);	
	printf("\n--------------------------------");
	printf("\nA quantidade total de arroz cozido � de %.2f kg", soma_arroz);
	printf("\nA quantidade total de maionese � de %.2f kg", soma_maio);
	printf("\nA quantidade total de p�o de alho � de %.f pacotes com 5 unidades", soma_alho/5);
	printf("\n--------------------------------");
	printf("\nA quantidade total de cerveja � de %.f latas de 350 mL", soma_cerv);
	printf("\nA quantidade total de refrigerante � de %.f garrafas de 2 L", soma_refri/2);	
	
	return 0;
}

/* 
carnes para homens 500g para cada
carnes para mulheres 300g para cada
carnes para crian�as 150g para cada

cerveja para homens 5 latinhas para cada
cerveja para mulheres 3 latinhas para cada

refrigerante para homens 2 L para 10
refrigerante para mulheres 2 L para 10
refrigerante para crian�as 2 L para 5

p�o de alho para homens 3 para cada
p�o de alho para mulheres 3 para cada
p�o de alho para crian�as 1 para cada

arroz para homens 300 g para cada
arroz para mulheres 100 g para cada
arroz para crian�as 50 g para cada

maionese para homens 100 g para cada
maionese para mulheres 50 g para cada
maionese para crian�as 30 g para cada
*/
