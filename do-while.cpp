#include <stdio.h>
#include <locale.h>

int main() {
	int ano = 0; 
	int alturaFelis = 110;
	int alturaAna = 150;
	
	do{
		ano++;
		alturaFelis = alturaFelis + 3;	
	}

	while(alturaFelis < alturaAna);
	
	printf("Faltam %d anos para Felisberto ser mais alto que Anacleto", ano);
}
