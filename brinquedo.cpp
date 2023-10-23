#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num = 100;
	int tecla;
	
	printf("Pressione uma tecla: ");
	scanf("%d", &tecla);
	
	switch(tecla){
		case 1: 
			num = 10; break;
		
		case 2: 
			num = num - 2; break;
		
		case 3: 
			num = num * 5; break;
		
		case 4: 
			num = num / 3; break;  
		
		case 5:
			num = num % 7; break;
	}

	printf("valor atual de num: %d", num);
 }
