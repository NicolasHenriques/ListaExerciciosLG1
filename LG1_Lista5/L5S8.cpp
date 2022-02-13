#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a[40], i, j, x, resp, pesq, acha;
	printf("\tAlgoritmo que armazenara nota de 40 alunos e as colocara em ordem crescente.\n\n");
	
	for(i=0;i<=39;++i)
	{
		printf("Entre com a nota do %do aluno: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=39;++i)
	for(j=i+1;j<=40;++j)
	{
		if(a[i]>a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
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
		
		while(i<=39)
		{
			if(pesq==a[i])
			{
				acha=1;
				i+=1;
			}
			
			else
			{
				i+=1;
				acha=0;
			}

			if(acha==1)
			{
				printf("\nQuem tirou a nota %d foi o %do aluno.", pesq, i);
			}
		}
	}
	
	getch();
	return 0;
}
