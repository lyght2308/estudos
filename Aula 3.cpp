#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float nota1;
	float nota2;
	float nota3;
	
	printf("1° Nota: ");
	scanf("%f", &nota1);
	
	printf("2° Nota: ");
	scanf("%f", &nota2);
	
	printf("3° Nota: ");
	scanf("%f", &nota3);
	
	float media = (nota1 * 0.5) + (nota2 * 0,3) + (nota3 * 0.2);
	
	printf("Média Final: %.2f", media);
	
}
