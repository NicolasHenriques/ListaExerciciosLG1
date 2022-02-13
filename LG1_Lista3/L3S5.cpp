#include<stdio.h>
#include<conio.h>

int main()
{
	int cont;
	printf("\tExibir todos os numeros divisiveis por 4 que sejam menores que 200\n\n");
	for(cont=1;cont<200;++cont)
	{
		if(cont%4==0)
		{
			printf("\n%d", cont);
		}
	}
	
	getch();
	return 0;
}
