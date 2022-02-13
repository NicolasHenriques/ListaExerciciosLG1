#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[8], b[8], i, j, x, pesq, resp, acha;
	printf("\tPrograma que multiplicara os valores da matriz 'a' por 5 e os armazenara em uma matriz 'b'.\n");
	printf("Apos isso, uma pesquisa dos valores da matriz 'b' pode ser realizada\n\n");
	printf("Entre com os valores da matriz 'a': \n\n");
	
	for(i=0;i<=7;++i)
	{
		scanf("%d", &a[i]);
		b[i]=a[i]*5;
	}
	
	for(i=0;i<=7;++i)
	for(j=i+1;j<=8;++j)
	{
		if(b[i]>b[j])
		{
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	}
	
	printf("\n\nOs valores da matriz 'b' em ordem crescente sao: \n");
	
	for(i=0;i<=7;++i)
	{
		printf("\n%d", b[i]);
	}
	
	printf("\n\nDeseja fazer a pesquisa dos valores da matriz 'b'?\nResponda com 1 para sim e 0 para nao.\n\n");
	scanf("%d", &resp);
	
	if(resp==1)
	{
		system("cls");
		printf("\nEntre com o numero que deseja procurar: ");
		fflush(stdin); scanf("%d", &pesq);
		i=0;
		acha=0;
		
		while(i<=7 && acha==0)
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
				printf("\nO numero %d foi encontrado na posicao %d", pesq, i+1);
			}
		}
		
		if(acha==0)
		{
			printf("\nO numero %d nao foi localizado.", pesq);
		}
	}
	
	
	getch();
	return 0;
}
