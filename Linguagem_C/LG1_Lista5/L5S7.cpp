#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[20], b[20], i, j, x, pesq, acha, resp;
	printf("\tPrograma em que cada elemento da matriz 'b' eh cada elemento da matriz 'a' adicionados de 2.\n\n");
	printf("Entre com 30 valores para a matriz 'a':\n\n");
	
	for(i=0;i<=19;++i)
	{
		scanf("%d", &a[i]);
		b[i]=a[i]+2;
	}
	
	for(i=0;i<=19;++i)
	for(j=i+1;j<=20;++j)
	{
		if(b[i]>b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}
	
	printf("\n\nOs valores da matriz 'b' sao:\n");
	
	for(i=0;i<=19;++i)
	{
		printf("\n%d", b[i]);
	}
	
	printf("\n\nDeseja efetuar a pesquisa?\nResponda com 1 para sim e 0 para nao\n");
	scanf("%d", &resp);
	
	if(resp==1)
	{
		system("cls");
		printf("\nInsira o numero a ser pesquisado: ");
		scanf("%d", &pesq);
		i=0;
		acha=0;
		
		while(i<=19 && acha==0)
		{
			if(pesq==b[i])
			{
				acha=1;
			}
			
			else
			{
				i+=1;
			}
			
			if(acha==1)
			{
				printf("\nO numero %d foi encontrado na posicao %d.", pesq, i+1);
			}
		}
		
		if(acha==0)
		{
			printf("\nO numero %d nao foi encontrado.", pesq);
		}
	}
	
	getch();
	return 0;
}
