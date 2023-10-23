#include <stdio.h>
#include <locale.h>

int main() {
	int ano = 0;
	int alturaFelis = 110;
	int alturaAna = 160;
	
	while(alturaFelis < alturaAna){
		ano++;
		alturaAna = alturaAna + 2;
		alturaFelis = alturaFelis + 3;
	}
}
