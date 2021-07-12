#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float minutos, minutos_50, minutos_mais_50;
		
	printf("--- Conta de celular ---\n");
	printf("-----------------------------\n");
	printf("Digite quantos minutos foram gastos no mês:");	
	scanf("%f", &minutos);
	
	minutos_50 = 50;
	minutos_mais_50 = (minutos-50)*1.50 + 50;
	
	if (minutos <= 50)
	{
		printf("Sua conta de celular, esse mês, é de: R$ %.2f", minutos_50);				
	}	
	else
	{
		printf("Sua conta de celular, esse mês, é de: R$ %.2f", minutos_mais_50);
	}
	return 0;
}
