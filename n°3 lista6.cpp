#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

	int tempInicial;
	int minutos;
	
	printf("Informe a temperatura inicial do objeto a ser aquecido: ");
	scanf("%d", &tempInicial);
	
	if(tempInicial > 50)
		printf("A temperatura inicial deve ser inferior a 50°C");
	
	else{
	
		while(tempInicial < 50){
			tempInicial = tempInicial + 3;
			minutos++;
		}
		
		printf("O objeto atingirá 50°C em %d minutos", minutos);
	
	}
}
