#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int distanciaTotal;
	int quantidadeCombustivel;
	
	
	printf("Digite a Distância Total: ");
	scanf("%d", &distanciaTotal);
	
	printf("Quantidade de Combustível: ");
	scanf("%d", &quantidadeCombustivel);
	
	int consumoMedio = (distanciaTotal / quantidadeCombustivel);
	printf ("Consumo Médio de Combustível: %d km/l", consumoMedio);
}
