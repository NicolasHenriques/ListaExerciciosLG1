#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("\tProgama que ira ler um numero e informar o curso correspondente\n\n");
	printf("Entre com um numero entre 1 e 5: ");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("\nEngenharia"); break;
			
		case 2:
			printf("\nEdificacoes"); break;
			
		case 3:
			printf("\nSistemas eletricos"); break;
			
		case 4:
			printf("\nTurismo"); break;
			
		case 5:
			printf("\nAnalise de sistemas"); break;
			
		default:
			printf("\nO valor eh invalido.");
	}
	
	getch();
	return 0;
}
