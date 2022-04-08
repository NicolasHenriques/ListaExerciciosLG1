#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[5], i;
	printf("Entre com cinco valores para a matriz 'a': ");
	
	for(i=0;i<=4;++i)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Entre com os valores da matriz 'b' para subtrairem os valores da matriz 'a': ");
	
	for(i=0;i<=4;++i)
	{
		scanf("%d", &b[i]);
		c[i]=a[i]-b[i];
	}

	for(i=0;i<=4;++i)
	{
		printf("\n%d", c[i]);
	}
	
	getch();
	return 0;
}
