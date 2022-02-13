#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i;
	printf("\tPrograma que ira ler uma matriz 'a' e mostrar os seus fatoriais em uma matriz 'b'.\n\n");
	printf("Entre com 6 valores para a matriz 'a': \n");
	
	for(i=0;i<=5;++i)
	{
		scanf("%d", &a[i]);
		
		for(b[i]=1;a[i]>1;--a[i])
		{
			b[i]=b[i]*a[i];
		}
	}
	
	printf("\nOs valores da matriz 'b' sao: \n");
	
	for(i=0;i<=5;++i)
	{
		printf("\n%d", b[i]);
	}
	
	getch();
	return 0;
}
