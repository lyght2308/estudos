#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int tempInicial;
	int minutos;
	
	printf("Informe a temperatura inicial do objeto: ");
	scanf("%d", &tempInicial);
	
	if(tempInicial < 10)
		printf("A temperatura inicial deve ser superior a 10°C");
	
	else{
		
		while(tempInicial > 10) {
		tempInicial = tempInicial - 5;
		minutos++;
		}	
	
		printf("O objeto atingira 10°C em %d minutos", minutos);
	}


}
