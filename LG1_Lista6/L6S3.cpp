#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[10], b[10][3], c[10], i, j, x;
	printf("Entre com 10 valores para a matriz 'a': \n\n");
	
	for(i=0;i<=9;++i)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=9;++i)
	for(j=1;j<=1;++j)
	{
		b[i][j]=a[i]+5;
		c[i]=1;
	}
	
	for(i=0;i<=9;++i)
	for(x=1;x<=a[i];++x)	
	{
		c[i]*=x;
	}
	
	for(i=0;i<=9;++i)
	for(j=2;j<=2;++j)
	{
		b[i][j]=c[i];
	}
	
	for(i=0;i<=9;++i)
	for(j=3;j<=3;++j)
	{
		b[i][j]=a[i]*a[i];
	}
	
	system("cls");
	printf("Os valores da matriz 'b' sao:\n\n");
	
	for(i=0;i<=9;++i)
	for(j=1;j<=3;++j)
	{
		printf("\n%d", b[i][j]);
	}
	
	getch();
	return 0;
}
