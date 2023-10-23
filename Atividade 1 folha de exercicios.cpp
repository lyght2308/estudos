#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float x;
	float y;
	float z;
	
	printf("1° Nota: ");
	scanf("%f", &x);
	
	printf("2° Nota: ");
	scanf("%f", &y);
	
	printf("3° Nota: ");
	scanf("%f", &z);
	
	float media = (x + y + z) /3;
	printf("Média Final: %.2f", media);
}
