#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

int matriza(int t)
{
	printf("Entre com o %do valor de A: ", i+1);
	scanf("%d", &t);
	
	return(t);
}
int matrizb(int u)
{
	printf("Entre com o %do valor de B: ", i+1);
	scanf("%d", &u);
	
	return(u);
}
int calc(int x)
{
	int z;
	
	z=x;
	
	return(z);
}
int saida(int w)
{
	printf("\n%d", w);
}
int main()
{
	int a[30], b[30], c[60];
	
	printf("\tJUNCAO DE 60 NUMEROS NUMA MATRIZ C\n\n");
	
	for(i=0;i<=29;++i)
	{
		a[i]=matriza(a[i]);
	}
	printf("\n\n");
	
	for(i=0;i<=29;++i)
	{
		b[i]=matrizb(b[i]);
	}
	printf("\n\n");
	
	for(i=0;i<=29;++i)
	{
		c[i]=calc(a[i]);
	}

	for(i=0;i<=29;++i)
	{
		c[i+30]=calc(b[i]);
	}
	printf("\n\nOs valores da matriz C sao: ");
	
	for(i=0;i<=59;++i)
	{
		saida(c[i]);
	}
	
	getch();
	return 0;
}
