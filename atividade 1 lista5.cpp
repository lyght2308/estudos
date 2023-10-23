#include <stdio.h>
#include <locale.h>

int main(){
	int ano = 0;
	int alturaAna = 150;
	int alturaFelis = 110;
	
	while(alturaFelis <= alturaAna){
		alturaFelis = alturaFelis + 3;
		alturaAna = alturaAna + 2;
		ano++;
	}
	printf("%d", ano);
}
