#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int cont, x;
	printf("\tExibir as potencias de 3 variando de 0 a 15\n\n");
	for(cont=0;cont<=15;++cont)
	{
		x=pow(3, cont);
		printf("\n%d", x);
	}
	
	getch();
	return 0;
}
