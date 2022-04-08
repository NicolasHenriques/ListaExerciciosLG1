#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[7], b[7], c[7][2], i, j;
	printf("Entre com 7 valores para a matriz 'a':\n\n");
	
	for(i=0;i<=6;++i)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\n\nEntre com 7 valores para a matriz 'b':\n\n");
	
	for(i=0;i<=6;++i)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<=6;++i)
	for(j=1;j<=1;++j)
	{
		c[i][j]=a[i];
	}
	
	for(i=0;i<=6;++i)
	for(j=2;j<=2;++j)
	{
		c[i][j]=b[i];
	}
	
	system("cls");
	printf("Os valores da matriz 'c' sao:\n\n");
	
	for(i=0;i<=6;++i)
	for(j=1;j<=2;++j)
	{
		printf("\n%d", c[i][j]);
	}
	
	getch();
	return 0;
}

