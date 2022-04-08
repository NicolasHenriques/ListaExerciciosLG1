#include<conio.h>
#include<stdio.h>

int main()
{
	int tab, cont, x;
	printf("Entre com a tabuada: ");
	scanf("%d", &x);
	for(cont=1;cont<=10;++cont)
	{
		tab=x*cont;
		printf("\n%d x %d = %d", x, cont, tab);
	}
	
	getch();
	return 0;
}
