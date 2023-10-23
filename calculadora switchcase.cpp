#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

    int operation;
    int continuarUsando;
    int contadorExpoente = 1;

    do
    {
        printf("\n1 - Adição");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n5 - Potenciação");
        printf("\n6 - Menu Inicial");
        printf("\n7 - Sair");


        printf("\nEscolha o número da operação desejada: ");
        scanf("%d", &operation);

        if (operation > 7)
        {
            printf("\nNúmero de opção inválida!");
        }

        if (operation < 6) {
            float resultado = 0;
            float num1;
            float num2;

            switch (operation) {

                case 1:
                    printf("Escolha um número: ");
                    scanf("%f", &num1);
                    printf("Escolha um segundo número: ");
                    scanf("%f", &num2);

                    resultado = num1 + num2;

                    printf("O resultado da soma é %f ", resultado);
                    printf("\nDeseja realizar outra operação (1) ou (0)?");
                    scanf("%d", &continuarUsando);

                    if (continuarUsando == 1)
                    {
                        operation = 6;
                    }

                    else
                    {
                        if (continuarUsando == 0)
                        {
                            operation = 7;
                        }
                        
						}
                        
                    break;
                
                    case 2:
	                    printf("Escolha um número: ");
	                    scanf("%f", &num1);
	                    printf("Escolha um segundo número: ");
	                    scanf("%f", &num2);
	
	                    resultado = num1 - num2;
	
	                    printf("O resultado da soma é %.1f ", resultado);
	                    printf("\nDeseja realizar outra operação (1) ou (0)?");
	                    scanf("%d", &continuarUsando);
	
	                    if (continuarUsando == 1)
	                    {
	                        operation = 6;
	                    }

	                    else
	                    {
	                        if (continuarUsando == 0)
	                        {
	                            operation = 7;
	                        }
	                        
							}

                        break;
                    
                    case 3:
                         printf("Escolha um número: ");
                    	scanf("%f", &num1);
                    	printf("Escolha um segundo número: ");
                    	scanf("%f", &num2);

                    	resultado = num1 * num2;

                    	printf("O resultado da soma é %.1f ", resultado);
                    	printf("\nDeseja realizar outra operação (1) ou (0)?");
                    	scanf("%d", &continuarUsando);

                    	if (continuarUsando == 1)
                   		{
                        	operation = 6;
                    	}

                    	else
                    	{
                        	if (continuarUsando == 0)
                        	{
                            	operation = 7;
                        	}
                        	
							}
                        
                        break;

                    case 4:
                        printf("\nEscolha um número: ");
						scanf("%f", &num1);
                        printf("\nEscolha um segundo número: ");
                        scanf("%f", &num2);

                        resultado = num2 / num1;
                        
                        printf("\nO resultado da divisão é %.1f", resultado);
                        printf("\nDeseja realizar outra operação (1) ou (0)?");
                        scanf("%d", &continuarUsando);

                        if (continuarUsando == 1)
                        {
                            operation = 6;
                        }

                        else
                        {
                            if (continuarUsando == 0)
                            {
                                operation = 7;
                            }
                        }
                        
                        break;

                    case 5:
                        float soma = 1;

                        printf("Escolha uma base para a potência: ");
                        int Base;
                        scanf("%d", &Base);
                        printf("Escolha um expoente (inteiro) para a potência: ");
                        int Expoente;
                        scanf("%d", &Expoente);

                        while (contadorExpoente <= Expoente)
                        {
                            soma = soma * Base;
                            contadorExpoente++;
                        }

                        printf("O resultado da potência é %.1f", soma);
                        printf("\nDeseja realizar outra operação (1) ou (0)?");
                        scanf("%d", &continuarUsando);
                    
                        if (continuarUsando == 1)
                        {
                            operation = 6;
                        }

                        else
                        {
                            if (continuarUsando == 0)
                            {
                                operation = 7;
                            }
                        }

                        break;
                }
            }
        }

        while (operation != 7 || operation == 6);

    }
