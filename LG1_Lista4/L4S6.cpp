#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8], b[8], i;
	printf("\tPrograma que os valores da matriz 'b' serao o quadrado dos valores da matriz 'a'.\n\n");
	
	printf("Entre com 8 valores para a matriz 'a': \n");
	
	for(i=0;i<=7;++i)
	{
		scanf("%d", &a[i]);
		b[i]=a[i]*a[i];
	}
	
	printf("\nOs valores da matriz 'b' sao : ");
	
	for(i=0;i<=7;++i)
	{
		printf("\n%d", b[i]);
	}
	
	getch();
	return 0;
}
