#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int impressoes;
	int maiorNumero;
	int soma = 0;
	
	for(int i = 1; i <= 5; i++){
		printf("Informe a quantia de impress�es realizadas no %d� setor: ", i);
		scanf("%d", &impressoes);
		
		soma = soma + impressoes;
		
		if(i == 1){
			maiorNumero = impressoes;
		}
	
		else{
			if(impressoes > maiorNumero)
				maiorNumero = impressoes;
		}
		
	}
	
	printf("O total de impressoes � %d", soma);
	printf("\nO maior numero de impressoes realizadas foi: %d", maiorNumero);
	
	int media = soma / 5;
	printf("\nA media de impress�es por setor � %d", media);
}
