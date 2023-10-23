#include <stdio.h> 
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");

	int base;
	int expoente;
	int multCount = 1;
	
	
	
	//need a variable(multiplicacao) to store the value of my base after it has been multiplied (cant use the base variable itself cuz then it would mess up the original value ans cause a mess
	int multiplicacao;
		
	printf("Digite um número para a base: ");
	scanf("%d", &base);
		
	printf("Digite um número para o expoente: ");
	scanf("%d", &expoente);
		
	//need to make rules so that the base isn't lower than 2 and the power isnt lower or equal than 1
	if(base >= 2 && expoente > 1){
			
		while(multCount <= expoente){
			multiplicacao = multiplicacao * base;
			multCount++;
		}
		
		printf("O valor desta potência é %d", multiplicacao);
		//need a variable to count how many times the base has alrealdy been multiplied and stop the loop when that variable's value is equal to the value provided for my power(expoente) variable	
	}
	
	//rules in case the value of either the base or the power doesn't meet the requirements
	else{
		if(base < 2 || expoente > 1){
			printf("\nO valor da base deve ser maior ou igual a 2!");
		}
		
		
		if(base >= 2 || expoente <= 1){
			printf("\nO valor do expoente deve ser maior que 1!");
		}
		
	}
	
	
}
