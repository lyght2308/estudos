#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
		int operacao;
		float saldo = 1000;
	
		printf("\n1-Saldo");
		printf("\n2-Saque");
		printf("\n3-Dep�sito");
		printf("\n4-Sair");
		printf("\nEscolha uma opera��o: ");
		scanf("%d", &operacao);
	
		switch(operacao){
			case 1:
				printf("\nSaldo Dispon�vel: R$%.2f", saldo);
				break;
			
			case 2: 
				float saque;
				printf("Valor do saque: ");
				scanf("%f", &saque);
					if(saque <= saldo){
						saldo = saldo - saque;
						printf("Saldo Dispon�vel: R$%.2f", saldo);
					}
				else{
					printf("Saldo Indispon�vel!");
				}
				break;
				
			case 3:
				float deposito;
				printf("Valor do Dep�sito: ");
				scanf("%f", &deposito);
				saldo = saldo + deposito;
				printf("Saldo: R$%.2f", saldo);
				
				break;
			
			case 4: 
				printf("Encerrando!");
			break;
		}
	
	}
	
