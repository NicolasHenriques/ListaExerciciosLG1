#include<stdio.h>
#include<conio.h>

int main()
{
	int cont, x;
	printf("\tExibir o quadrado dos numeros inteiros de 15 a 200\n\n");
	for(cont=15;cont<=200;++cont)
	{
		x=cont*cont;
		printf("\n%d", x);
	}
	
	getch();
	return 0;
}
