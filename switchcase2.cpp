#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
		int operacao;
		float saldo = 1000;
	
		printf("\n1-Saldo");
		printf("\n2-Saque");
		printf("\n3-Depósito");
		printf("\n4-Sair");
		printf("\nEscolha uma operação: ");
		scanf("%d", &operacao);
	
		switch(operacao){
			case 1:
				printf("\nSaldo Disponível: R$%.2f", saldo);
				break;
			
			case 2: 
				float saque;
				printf("Valor do saque: ");
				scanf("%f", &saque);
					if(saque <= saldo){
						saldo = saldo - saque;
						printf("Saldo Disponível: R$%.2f", saldo);
					}
				else{
					printf("Saldo Indisponível!");
				}
				break;
				
			case 3:
				float deposito;
				printf("Valor do Depósito: ");
				scanf("%f", &deposito);
				saldo = saldo + deposito;
				printf("Saldo: R$%.2f", saldo);
				
				break;
			
			case 4: 
				printf("Encerrando!");
			break;
		}
	
	}
	
