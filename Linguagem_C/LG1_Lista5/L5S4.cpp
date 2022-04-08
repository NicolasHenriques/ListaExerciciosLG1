#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], b[12], c[12], i, j, x;
	printf("\tPrograma que ira ordenar os elementos de uma matriz 'a' e de uma matriz 'b' e coloca-los em ordem crescente.\n");
	printf("Apos isso, os valores das matrizes 'a' e 'b' serao armazenados em uma matriz 'c', que sera organizada em ordem crescente tambem.\n\n");
	printf("Entre com 12 valores para a matriz 'a': \n\n");
	
	for(i=1;i<=12;++i)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=1;i<=12;++i)
	for(j=i+1;j<=12;++j)
	{
		if(a[i]>a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}
	
	printf("\n\nEntre com 12 valores para a matriz 'b': \n\n");
	
	for(i=1;i<=12;++i)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=1;i<=12;++i)
	for(j=i+1;j<=12;++j)
	{
		if(b[i]>b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}
	
	for(i=1;i<=12;++i)
	{
		c[i]=a[i]+b[i];
	}
	
	for(i=1;i<=12;++i)
	for(j=i+1;j<=13;++j)
	{
		if(c[i]>c[j])
		{
			x=c[i];
			c[i]=c[j];
			c[j]=x;
		}
	}
	
	printf("\n\nOs valores da matriz 'c' sao: \n");
	
	for(i=1;i<=12;++i)
	{
		printf("\n%d", c[i]);
	}
	
	getch();
	return 0;
}
