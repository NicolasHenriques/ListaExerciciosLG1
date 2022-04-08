#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[10], i;
	printf("\tPrograma que vai unir os valores de uma matriz 'a' com os valores de uma matriz 'b' em uma matriz 'c'.\n\n");
	printf("Entre com os valores da matriz 'a': \n");
	
	for(i=0;i<=4;++i)
	{
		scanf ("%d", &a[i]);
		c[i]=a[i];
	}
	
	printf("\nEntre com os valores da matriz 'b': \n");
	
	for(i=0;i<=4;++i)
	{
		scanf ("%d", &b[i]);
		c[i+5]=b[i];
	}
	
	printf("\nOs valores da matriz 'c' sao:");
	
	for(i=0;i<=9;++i)
	{
		printf("\n%d", c[i]);
	}
	
	getch();
	return 0;
}
