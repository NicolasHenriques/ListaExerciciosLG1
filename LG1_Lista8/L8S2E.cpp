#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

int matriza(int t)
{
	printf("Entre com o %do elemento de A: ", i+1);
	scanf("%d", &t);
	
	return(t);
}
int matrizb(int u)
{
	printf("Entre com o %do elemento de B: ", i+1);
	scanf("%d", &u);
	
	return(u);
}
int soma(int x, int y)
{
	int z;
	
	z=x+y;
	
	return(z);
}
int saida(int x)
{
	printf("\n%d", x);
}
int main()
{
	int j, x, a[12], b[12], c[12];

	printf("PROGRAMA ONDE CADA ELEMENTO DE C EH A SOMA DE A E B\n\n");

	for(i=0;i<=11;++i)
	{
		a[i]=matriza(a[i]);
	}
	printf("\n\n");

	for(i=0;i<=11;++i)
	{
		b[i]=matrizb(b[i]);
	}
	printf("\n\n");

	for(i=0;i<=11;++i)
	for(j=i+1;j<=11;++j)
	{
		if(a[i]>a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
		
		if(b[i]>b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}
	
	for(i=0;i<=11;++i)
	{
		c[i]=soma(a[i], b[i]);
	}
	
	for(i=0;i<=11;++i)
	for(j=i+1;j<=11;++j)
	{
		if(c[i]>c[j])
		{
			x=c[i];
			c[i]=c[j];
			c[j]=x;
		}
	}
	
	system("cls");
	
	printf("Os valores da matriz C sao: \n");
	
	for(i=0;i<=11;++i)
	{
		saida(c[i]);
	}
	
	getch();
	return 0;
}
