#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

int matriza(int *t)
{
	printf("Entre com o %do elemento de A: ", i+1);
	scanf("%d", &*t);
	
	return(0);
}
int matrizb(int *u)
{
	printf("Entre com o %do elemento de B: ", i+1);
	scanf("%d", &*u);
	
	return(0);
}
int ordem(int *x, int *y)
{
	int z;
	
	if(*x>*y)
	{
		z=*x;
		*x=*y;
		*y=z;
	}
	
	return(0);
}
int soma(int *v, int *w, int *z)
{	
	*z=*v+*w;
	
	return(0);
}
int saida(int *x)
{
	printf("\n%d", *x);
}
int main()
{
	int j, x, a[12], b[12], c[12];

	printf("PROGRAMA ONDE CADA ELEMENTO DE C EH A SOMA DE A E B\n\n");

	for(i=0;i<=11;++i)
	{
		matriza(&a[i]);
	}
	printf("\n\n");

	for(i=0;i<=11;++i)
	{
		matrizb(&b[i]);
	}
	printf("\n\n");

	for(i=0;i<=11;++i)
	for(j=i+1;j<=11;++j)
	{
		ordem(&a[i], &a[j]);
		ordem(&b[i], &b[j]);
	}
	
	for(i=0;i<=11;++i)
	{
		soma(&a[i], &b[i], &c[i]);
	}
	
	for(i=0;i<=11;++i)
	for(j=i+1;j<=11;++j)
	{
		ordem(&c[i], &c[j]);
	}
	
	system("cls");
	
	printf("Os valores da matriz C sao: \n");
	
	for(i=0;i<=11;++i)
	{
		saida(&c[i]);
	}
	
	getch();
	return 0;
}
