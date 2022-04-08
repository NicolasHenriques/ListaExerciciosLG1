#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, j, x;
	printf("\tPrograma que ira ler uma matriz 'a' e mostrar os seus fatoriais em uma matriz 'b'.\n");
	printf("Apos isso, ordenar os valores da matriz 'b' em ordem crescente.\n");
	printf("\nEntre com 15 valores para a matriz 'a': \n\n");
	
	for(i=0;i<=14;++i)
	{
		scanf("%d", &a[i]);
		
		for(b[i]=1;a[i]>1;--a[i])
		{
			b[i]=b[i]*a[i];
		}
	}
	
	for(i=0;i<=14;++i)
	for(j=i+1;j<=15;++j)
	{
		if(b[i]>b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}
	
	printf("\nOs valores da matriz 'b' sao: \n");
	
	for(i=1;i<=15;++i)
	{
		printf("\n%d", b[i]);
	}
	
	getch();
	return 0;
}
