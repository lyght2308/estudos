#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade );
	printf("Você possui %d anos de idade", idade);
	
}
