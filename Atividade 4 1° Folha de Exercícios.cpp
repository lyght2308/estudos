#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int distanciaTotal;
	int quantidadeCombustivel;
	
	
	printf("Digite a Dist�ncia Total: ");
	scanf("%d", &distanciaTotal);
	
	printf("Quantidade de Combust�vel: ");
	scanf("%d", &quantidadeCombustivel);
	
	int consumoMedio = (distanciaTotal / quantidadeCombustivel);
	printf ("Consumo M�dio de Combust�vel: %d km/l", consumoMedio);
}
