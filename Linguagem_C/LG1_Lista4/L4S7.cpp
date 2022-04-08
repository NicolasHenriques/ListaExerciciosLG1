#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10], b[10], i;
	printf("\tPrograma que ira ler os valores de uma matriz 'a' e exibir e inverte-los em uma matriz 'b'\n\n");
	
	printf("Entre com os valores da matriz 'a': \n");
	
	for(i=0;i<=9;++i)
	{
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	
	printf("\nOs valores da matriz 'b' sao: \n");
	
	for(i=9;i>=0;--i)
	{
		printf("\n%d", b[i]);
	}
	
	getch();
	return 0;
}
