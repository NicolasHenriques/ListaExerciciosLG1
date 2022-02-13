#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros impares exitentes entre 1 e 20\n\n");
	for(cont=1;cont<=20;cont+=2)
	{
		printf("%d\n", cont);
	}
	
	getch();
	return 0;
}
