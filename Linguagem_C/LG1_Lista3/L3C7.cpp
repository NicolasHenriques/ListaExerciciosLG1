#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tExibir numeros de 1 a 20\n\n");
	cont=1;
	do
	{
		printf("%d\n", cont);
		++cont;
	}
	
	while(cont<=20);
	
	getch();
	return 0;
}
