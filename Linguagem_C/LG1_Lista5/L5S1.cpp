#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], i, j, x;
	printf("\tOrdenacao de 12 numeros em ordem decrescente.\n\n");
	printf("Entre com os 12 valores: \n\n");
	
	for(i=0;i<=11;++i)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=11;++i)
	for(j=i+1;j<=12;++j)
	{
		if(a[i]<a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}
	
	printf("\nOs numeros ordenados em ordem decrescente sao:\n");
	
	for(i=0;i<=11;++i)
	{
		printf("\n%d", a[i]);
	}
	
	getch();
	return 0;
}
