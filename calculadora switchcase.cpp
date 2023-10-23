#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

    int operation;
    int continuarUsando;
    int contadorExpoente = 1;

    do
    {
        printf("\n1 - Adi��o");
        printf("\n2 - Subtra��o");
        printf("\n3 - Multiplica��o");
        printf("\n4 - Divis�o");
        printf("\n5 - Potencia��o");
        printf("\n6 - Menu Inicial");
        printf("\n7 - Sair");


        printf("\nEscolha o n�mero da opera��o desejada: ");
        scanf("%d", &operation);

        if (operation > 7)
        {
            printf("\nN�mero de op��o inv�lida!");
        }

        if (operation < 6) {
            float resultado = 0;
            float num1;
            float num2;

            switch (operation) {

                case 1:
                    printf("Escolha um n�mero: ");
                    scanf("%f", &num1);
                    printf("Escolha um segundo n�mero: ");
                    scanf("%f", &num2);

                    resultado = num1 + num2;

                    printf("O resultado da soma � %f ", resultado);
                    printf("\nDeseja realizar outra opera��o (1) ou (0)?");
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
	                    printf("Escolha um n�mero: ");
	                    scanf("%f", &num1);
	                    printf("Escolha um segundo n�mero: ");
	                    scanf("%f", &num2);
	
	                    resultado = num1 - num2;
	
	                    printf("O resultado da soma � %.1f ", resultado);
	                    printf("\nDeseja realizar outra opera��o (1) ou (0)?");
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
                         printf("Escolha um n�mero: ");
                    	scanf("%f", &num1);
                    	printf("Escolha um segundo n�mero: ");
                    	scanf("%f", &num2);

                    	resultado = num1 * num2;

                    	printf("O resultado da soma � %.1f ", resultado);
                    	printf("\nDeseja realizar outra opera��o (1) ou (0)?");
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
                        printf("\nEscolha um n�mero: ");
						scanf("%f", &num1);
                        printf("\nEscolha um segundo n�mero: ");
                        scanf("%f", &num2);

                        resultado = num2 / num1;
                        
                        printf("\nO resultado da divis�o � %.1f", resultado);
                        printf("\nDeseja realizar outra opera��o (1) ou (0)?");
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

                        printf("Escolha uma base para a pot�ncia: ");
                        int Base;
                        scanf("%d", &Base);
                        printf("Escolha um expoente (inteiro) para a pot�ncia: ");
                        int Expoente;
                        scanf("%d", &Expoente);

                        while (contadorExpoente <= Expoente)
                        {
                            soma = soma * Base;
                            contadorExpoente++;
                        }

                        printf("O resultado da pot�ncia � %.1f", soma);
                        printf("\nDeseja realizar outra opera��o (1) ou (0)?");
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
