#include <stdio.h>
#include <locale.h>
	
int main(){
	
	setlocale(LC_ALL, "portuguese");

	//need to do something so that the user can also come back to the initial menu, because the seventh function would (i assume) be for closing the program;
	//got no idea how to start this shit
	
	int operation = 0;

	
	do{
		printf("1 - Adição");
		printf("\n2 - Subtração");
		printf("\n3 - Sair");
	
		printf("\nEscolha uma operação: ");
		scanf("%d", &operation);

		if(operation != 0) {
			float resultado = 0;
			float num1;
			float num2;
			printf("Escolha um valor: ");
			scanf("%f", &num1);
			printf("Escolha um segundo valor: ");
			scanf("%f", &num2);
			
			switch(operation){
				case 1: {
					resultado = num1 + num2;
					break;
				}
			}
		}
	}
	
	while(operation != 3);

}
