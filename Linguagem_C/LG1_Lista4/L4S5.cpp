#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i;
	printf("\tPrograma que vai unir os valores de uma matriz 'a' com os valores de uma matriz 'b' em uma matriz 'c'.\n\n");
	printf("Entre com os valores da matriz 'a': \n");
	
	for(i=0;i<=19;++i)
	{
		scanf ("%d", &a[i]);
		c[i]=a[i];
	}
	
	printf("\nEntre com os valores da matriz 'b': \n");
	
	for(i=0;i<=29;++i)
	{
		scanf ("%d", &b[i]);
		c[i+20]=b[i];
	}
	
	printf("\nOs valores da matriz 'c' sao:");
	
	for(i=0;i<=49;++i)
	{
		printf("\n%d", c[i]);
	}
	
	getch();
	return 0;
}
