#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros pares existentes entre 20 e 1\n\n");
	cont=20;
	while(cont>0)
	{
		if(cont%2==0)
		{
			printf("%d\n", cont);
			cont-=1;
		}
		
		else
		{
			cont=cont-1;
		}
	}
	
	getch();
	return 0;
}
