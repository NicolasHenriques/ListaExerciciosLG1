#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros entre 1 e 20 classificados em par e impar\n\n");
	cont=1;
	while(cont<=20)
	{
		if(cont%2==0)
		{
			printf("%d eh par\n", cont);
			cont+=1;
		}
		
		else
		{
			printf("%d eh impar\n", cont);
			cont+=1;
		}
	}
	
	getch();
	return 0;
}
