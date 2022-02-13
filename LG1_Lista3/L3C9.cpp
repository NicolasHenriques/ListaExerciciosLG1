#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tClassificando os numeros de 1 a 20 entre par e impar\n\n");
	cont=1;
	do
	{
		if(cont%2==0)
		{
			printf("%d eh par\n", cont);
			++cont;
		}
		
		else
		{
			printf("%d eh impar\n", cont);
			++cont;
		}
	}
	
	while(cont<=20);
	
	getch();
	return 0;
}
