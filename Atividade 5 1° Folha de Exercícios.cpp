#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int quantidademinutos;
	
	printf("Digite a Quantidade de Minutos: ");
	scanf("%d", &quantidademinutos);
	
	int horas = (quantidademinutos / 60);
	int minutos = (quantidademinutos % 60);
	
	printf("Horas: %d Horas e %d Minutos", horas, minutos);
	
}
