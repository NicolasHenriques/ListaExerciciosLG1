#include<stdio.h>
#include<conio.h>

int main()
{
	int cont, x;
	printf("\tSomatoria dos numeros pares de 1 a 500\n\n");
	x=1+1;
	for(cont=2;cont<=500;++cont)
	{
		if(cont%2==0)
		{
			printf("\n%d", x);
			x=cont+x;
		}
	}
	
	getch();
	return 0;
}
