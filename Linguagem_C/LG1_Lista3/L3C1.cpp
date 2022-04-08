#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros de 1 a 20\n\n");
	cont=0;
	while(cont<=20)
	{
		printf("%d\n", cont);
		cont+=1;
	}
	
	getch();
	return 0;
}
