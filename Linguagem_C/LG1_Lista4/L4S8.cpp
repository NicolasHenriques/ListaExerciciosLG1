#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("\tProgama que ira ler um numero e retornar o nome do mes respectivo\n\n");
	printf("Entre com um numero entre 1 e 12: ");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("\n\nJaneiro"); break;
			
		case 2:
			printf("\n\nFevereiro"); break;
			
		case 3:
			printf("\n\nMarco"); break;
			
		case 4:
			printf("\n\nAbril"); break;
			
		case 5:
			printf("\n\nMaio"); break;
			
		case 6:
			printf("\n\nJunho"); break;
			
		case 7:
			printf("\n\nJulho"); break;
			
		case 8:
			printf("\n\nAgosto"); break;
			
		case 9:
			printf("\n\nSetembro"); break;
			
		case 10:
			printf("\n\nOutubro"); break;
			
		case 11:
			printf("\n\nNovembro"); break;
			
		case 12:
			printf("\n\nDezembro"); break;
			
		default:
			printf("\n\nO valor inserido nao corresponde a um mes.");
	}
	
	getch();
	return 0;
}
