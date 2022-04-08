#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros entre 20 e 1 classificados em par e impar\n\n");
	for(cont=20;cont<=1;cont=cont-1)
	{
		if(cont%2==0)
		{
			printf("%d eh par\n", cont);
		}
		
		else
		{
			printf("%d eh impar\n", cont);
		}
	}
	
	getch();
	return 0;
}
