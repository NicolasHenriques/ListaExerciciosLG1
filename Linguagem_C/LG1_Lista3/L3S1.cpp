#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tNumeros impares entre 0 e 20\n\n");
	for(cont=0; cont<=20; cont=cont+1)
	{
		if(cont%2==1)
		{
			printf("%d\n", cont);
		}
	
		else
		{
			cont+1;
		}
	}
	getch();
	return 0;
}
