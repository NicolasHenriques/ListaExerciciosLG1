#include<stdio.h>
#include<conio.h>

int main()
{
	int n, cont, N;
	printf("\tValor do numero vezes 3 enquanto o produto for menor que 250\n\n");
	printf("Entre com o valor de N: ");
	scanf("%d", &n);
	if(n>0 && n<=50)
	{
		N=n*1;
		for(cont=1;cont<=100;cont=cont*3)
		{
			if(N<250)
			{
				printf("\n%d", N);
			}
			N=n*cont*3;
		}
	}
	
	else
	{
		printf("\nO valor inserido eh menor ou igual a zero ou maior que 50");
	}
	
	getch();
	return 0;
}
