#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int um;
	int dois;
	
	printf("Digite um N�mero: ");
	scanf("%d", &um);
	
	printf("Digite outro N�mero: ");
	scanf("%d", &dois);
	
	int quociente = (um / dois);
	printf("Quociente: %d \n", quociente );
	
	int resto = (um % dois);
	printf("Resto: %d");
}
