#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	printf("Digite uma valor inteiro entre 1 e 7: ");
	scanf("%d", &num);
	
	switch(num){
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda-Feira"); break;
		case 3: printf("Terça-Feira"); break;
		case 4: printf("Quarta-Feira"); break;
		case 5: printf("Quinta-Feira"); break;
		case 6: printf("Sexta-Feira"); break;
		case 7: printf("Sábado"); break;
		default: printf("Valor Inválido!");
	}
	
	
}
