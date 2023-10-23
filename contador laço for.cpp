#include <stdio.h>
#include <locale.h>
#include "conio.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	textcolor(MAGENTA);
	
	for(unsigned long long int  contador = 1; contador >= 1; contador+=100000000000000){
		printf("%llu --", contador);		
	}
}
