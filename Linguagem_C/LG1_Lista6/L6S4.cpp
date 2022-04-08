#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[4], b[4], c[4][2], i, j;
	printf("Entre com 4 valores para a matriz 'a': \n\n");
	
	for(i=0;i<=3;++i)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\n\nEntre com os valores da matriz 'b': \n\n");
	
	for(i=0;i<=3;++i)
	{
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<=3;++i)
	for(j=1;j<=2;++j)
	{
		if(j==1)
		{
			c[i][j]=a[i]*2;
		}
		
		else
		{
			c[i][j]=b[i]-5;
		}
	}
	
	system("cls");
	printf("Os valores da matriz 'c' sao: \n");
	
	for(i=0;i<=3;++i)
	for(j=1;j<=2;++j)
	{
		printf("\n%d", c[i][j]);
	}
	
	getch();
	return 0;
}
