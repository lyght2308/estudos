#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int hectares;
	
	printf("Informe o tamanho da fazenda: ");
	scanf("%d", &hectares);
	
	printf("Hectares para os filhos de Luiz %d \n", hectares / 4);
	
	printf("Hectares para Luiz %d", hectares % 4);
}
