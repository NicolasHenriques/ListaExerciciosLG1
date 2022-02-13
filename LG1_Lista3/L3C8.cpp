#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tExibir todos os numeros pares entre 1 e 20\n\n");
	cont=1;
	do
	{
		if(cont%2==0)
		{
			printf("%d\n", cont);
			++cont;
		}
		
		else
		{
			++cont;
		}
	}
	
	while(cont<=20);
	
	getch();
	return 0;
}
