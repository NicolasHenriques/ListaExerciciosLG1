#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i, j;
struct cad
{
	char nome[50];
	char situ[10];
	float nota1;
	float nota2;
	float media;
};

struct cad x[20];

int cadastro()
{
	for(i=0;i<=19;++i)
	{
		system("cls");
		
		printf("------------ CADASTRO %d ------------", i+1);
	
		printf("\n\nEntre com o nome: ");
		fflush(stdin);
		fgets(x[i].nome, 50, stdin);

		printf("Entre com a nota 1: ");
		scanf("%f", &x[i].nota1);
			
		printf("Entre com a nota 2: ");
		scanf("%f", &x[i].nota2);
			
		x[i].media=(x[i].nota1+x[i].nota2)/2;
	}
	
	printf("\n\nAperte qualquer tecla para voltar ao menu.");
	getch();
}
int clas()
{
	system("cls");
	printf("------------ CLASSIFICACAO ------------");
	
	for(i=0;i<=19;++i)
	{
		if(x[i].media>=7)
		{
			strcpy(x[i].situ, "Aprovado");
		}
		
		else
		{
			strcpy(x[i].situ, "Reprovado");
		}
	}
	for(i=0;i<=19;++i)
	{
		printf("\n\nNome: %s", x[i].nome);
		printf("Media: %.2f", x[i].media);
		printf("\nSituacao: %s", x[i].situ);
	}
	
	printf("\n\nAperte qualquer tecla para voltar ao menu.");
	getch();
}
int alt()
{
	system("cls");
	
	int acha;
	char pesq[50];
				
	printf("------------ ALTERACAO ------------");
	printf("\n\nEntre com o nome para alterar o registro: ");
				
	fflush(stdin);
	fgets(pesq, 50, stdin);
				
	acha=0;
	i=0;
				
	while(i<=19)
	{	
		if(strcmp(pesq, x[i].nome)==0)
		{
			acha=1;
		}
					
		else
		{
			acha=0;
		}
					
		if(acha==1)
		{
			printf("\n\nEntre com o novo nome: ");
			fflush(stdin);
			fgets(x[i].nome, 50, stdin);
			
			printf("Entre com a nova nota 1: ");
			scanf("%f", &x[i].nota1);
			
			printf("Entre com a nova nota 2: ");
			scanf("%f", &x[i].nota2);
			
			x[i].media=(x[i].nota1+x[i].nota2)/2;
		
			if(x[i].media>=7)
			{
				strcpy(x[i].situ, "Aprovado");
			}
		
			else
			{
				strcpy(x[i].situ, "Reprovado");
			}
		}
					
		i+=1;
	}
				
	printf("\n\nAperte qualquer tecla para voltar para o menu.");
	getch();
}
int pesqnome()
{
	system("cls");
	
	int acha;
	char pesq[50];
		
	printf("------------ PESQUISA ------------");
	printf("\n\nEntre com o nome a ser pesquisado: ");
	fflush(stdin);
	fgets(pesq, 50, stdin);
	acha=0;
	i=0;
				
	while(i<=19)
	{	
		if(strcmp(pesq, x[i].nome)==0)
		{
			acha=1;
		}
					
		else
		{
			acha=0;
		}
					
		if(acha==1)
		{
			printf("\n\nNome: %s", x[i].nome);
			printf("\nNota 1: %.2f", x[i].nota1);
			printf("\nNota 2: %.2f", x[i].nota2);
			printf("\nMedia: %.2f", x[i].media);
			printf("\nSituacao: %s", x[i].situ);
		}
					
		i+=1;
	}
				
	printf("\n\nAperte qualquer tecla para voltar para o menu.");
	getch();
}
int aprov()
{
	system("cls");
	printf("------------ LISTA DE APROVADOS ------------");
	
	for(i=0;i<=19;++i)
	{
		if(strcmp(x[i].situ, "Aprovado")==0)
		{
			printf("\n\nNome: %s", x[i].nome);
			printf("Nota 1: %.2f", x[i].nota1);
			printf("\nNota 2: %.2f", x[i].nota2);
			printf("\nMedia: %.2f", x[i].media);
			printf("\nSituacao: %s", x[i].situ);
		}
	}
	
	printf("\n\nAperte qualquer tecla para voltar ao menu.");
	getch();
}
int reprov()
{
	system("cls");
	printf("------------ LISTA DE REPROVADOS ------------");
	
	for(i=0;i<=19;++i)
	{
		if(strcmp(x[i].situ, "Reprovado")==0)
		{
			printf("\n\nNome: %s", x[i].nome);
			printf("Nota 1: %.2f", x[i].nota1);
			printf("\nNota 2: %.2f", x[i].nota2);
			printf("\nMedia: %.2f", x[i].media);
			printf("\nSituacao: %s", x[i].situ);
		}
	}
	
	printf("\n\nAperte qualquer tecla para voltar ao menu.");
	getch();
}
int main()
{
	int menu;
	
	while(menu!=7)
	{
		system("cls");
		printf("\tMENU\n\n");
		printf("1. Cadastro\n");
		printf("2. Classificacao\n");
		printf("3. Alteracao de cadastro\n");
		printf("4. Pesquisa pelo nome\n");
		printf("5. Lista de aprovados\n");
		printf("6. Lista de reprovados\n");
		printf("7. Sair\n\n");
		scanf("%d", &menu);
		
		switch(menu)
		{
			case 1: cadastro(); break;
			case 2: clas(); break;
			case 3: alt(); break;
			case 4: pesqnome(); break;
			case 5: aprov(); break;
			case 6: reprov(); break;
		}
	}
	
	return 0;
}
