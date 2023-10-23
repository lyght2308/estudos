#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int userTime;
	printf("Informe o tempo(segundos): ");
	scanf("%d", &userTime);
	system("cls");
	for(int i = userTime; i >= 1; i--) {
		printf("%d", i);
		Sleep(1000);
		system("cls");
	}
	
	printf("\nTempo Esgotado!");
}
