#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros de 20 a 1\n\n");
	for(cont=20;cont>=1;cont-=1)
	{
		printf("%d\n", cont);
	}
	
	getch();
	return 0;
}
