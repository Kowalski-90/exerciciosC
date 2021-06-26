#include <stdio.h> 
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");    
	
	printf("--- CONTA DIGITAL BANCO BAMERINDUS ---\n");
	printf("--------------------------------------\n");	
	
	float saldo_conta, valor_operacao; 
    int tipo_operacao;    
    
    printf("Saldo inicial: R$ ");
    scanf("%f", &saldo_conta); 
    printf("\nDigite a operação desejada: [1] Depósito [2] Retirada [3] Sair"); 
    printf("\nOperação: ");
    scanf("%i", &tipo_operacao); 
    
    while(tipo_operacao != 3) {
        printf("\nValor: R$ ");
        scanf("%f", &valor_operacao); 

        if(tipo_operacao == 1){ 
            saldo_conta = saldo_conta + valor_operacao; 
        }
        
        else {
			if (tipo_operacao == 2) {
				saldo_conta = saldo_conta - valor_operacao; 
			}            
        }

        printf("\nDigite a operação desejada: [1] Depósito [2] Retirada [3] Sair");
        printf("\nOperação: ");
        scanf("%i", &tipo_operacao); 
    } 

    	printf("\nSaldo final: R$ %.2f", saldo_conta);

		    if(saldo_conta == 0) { 
		        printf("\nCONTA ZERADA");
		    }
			    else {
					if (saldo_conta < 0) {
						printf("\nCONTA ESTOURADA");
					}
						else {
							if (saldo_conta > 0) {
								printf("\nCONTA PREFERENCIAL");
							}
						} 			        
			    }
					    
    return 0;
}
