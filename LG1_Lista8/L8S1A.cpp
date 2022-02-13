#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i, j, acha;
char pesq[60];
struct cad
{
	char nome[50];
	char end[60];
	char tel[12];
	char email[60];
};

struct cad x[5];

int cadastro()
{
	for(i=0;i<=4;++i)
	{
		system("cls");
		
		printf("------------ CADASTRO %d ------------", i+1);
		
			printf("\n\nEntre com o nome: ");
			fflush(stdin);
			fgets(x[i].nome, 50, stdin);
		
			printf("Entre com o endereco: ");
			fflush(stdin);
			fgets(x[i].end, 60, stdin);
			
			printf("Entre com a e-mail: ");
			fflush(stdin);
			fgets(x[i].email, 60, stdin);
		
			printf("Entre com o numero de telefone: ");
			fflush(stdin);
			fgets(x[i].tel, 12, stdin);
	}
	
}
int pesqnome()
{
	system("cls");
	
	int acha;
		
	printf("------------ PESQUISA ------------");
	printf("\n\nEntre com o nome a ser pesquisado: ");
	fflush(stdin);
	fgets(pesq, 50, stdin);
	acha=0;
	i=0;
				
	while(i<=4)
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
			printf("Endereco: %s", x[i].end);
			printf("Email: %s", x[i].email);
			printf("Telefone: %s", x[i].tel);
		}
					
		i+=1;
	}
				
	printf("\n\nAperte qualquer tecla para voltar para o menu.");
	getch();
}
int alfa()
{
	system("cls");
	
	char y[60];
	int acha;
				
	printf("------------ ORDENACAO ------------\n\n");
				
	for(i=0;i<=4;++i)
	for(j=i+1;j<=4;++j)
		{
			if(strcmp(x[i].nome,x[j].nome)>0)
			{
				strcpy(y, x[i].nome);
				strcpy(x[i].nome, x[j].nome);
				strcpy(x[j].nome, y);
						
				strcpy(y, x[i].end);
				strcpy(x[i].end, x[j].end);
				strcpy(x[j].end, y);
				
				strcpy(y, x[i].tel);
				strcpy(x[i].tel, x[j].tel);
				strcpy(x[j].tel, y);
						
				strcpy(y, x[i].email);
				strcpy(x[i].email, x[j].email);
				strcpy(x[j].email, y);
			}
		}
				
		for(i=0;i<=4;++i)
		{
			printf("%s", x[i].nome);
		}
				
		printf("\n\nAperte qualquer tecla para continuar.");
		getch();
}
int alt()
{
	system("cls");
	
	int acha;
				
	printf("------------ ALTERACAO ------------");
	printf("\n\nEntre com o nome para alterar o registro: ");
				
	fflush(stdin);
	fgets(pesq, 50, stdin);
				
	acha=0;
	i=0;
				
	while(i<=4)
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
						
			printf("Entre com o novo endereco: ");
			fflush(stdin);
			fgets(x[i].end, 60, stdin);
			
			printf("Entre com o novo email: ");
			fflush(stdin);
			fgets(x[i].email, 60, stdin);
						
			printf("Entre com o novo telefone: ");
			fflush(stdin);
			fgets(x[i].tel, 12, stdin);
			
			
		}
					
		i+=1;
	}
				
	printf("\n\nAperte qualquer tecla para voltar para o menu.");
	getch();
}
int remoc()
{
	system("cls");
	
	int acha;
				
	printf("------------ ALTERACAO ------------");
	printf("\n\nEntre com o nome para alterar o registro: ");
				
	fflush(stdin);
	fgets(pesq, 50, stdin);
				
	acha=0;
	i=0;
				
	while(i<=4)
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
			printf("Aperte enter 4 vezes.");
			
			fflush(stdin);
			fgets(x[i].nome, 50, stdin);
						
			fflush(stdin);
			fgets(x[i].end, 60, stdin);
			
			fflush(stdin);
			fgets(x[i].email, 60, stdin);
						
			fflush(stdin);
			fgets(x[i].tel, 12, stdin);
		}
					
		i+=1;
	}
				
	printf("\n\nAperte qualquer tecla para voltar para o menu.");
	getch();	
}
int main()
{
	int menu;
	
	while(menu!=6)
	{
		system("cls");
		printf("\tMENU\n\n");
		printf("1. Cadastro e registro\n");
		printf("2. Pesquisa de registro\n");
		printf("3. Classificacao alfabetica\n");
		printf("4. Alteracao de registro\n");
		printf("5. Remocao de elementos cadastrados\n");
		printf("6. Sair\n\n");
		scanf("%d", &menu);
		
		switch(menu)
		{
			case 1:	cadastro(); break;
			
			case 2:	pesqnome(); break;
		
			case 3: alfa(); break;
			
			case 4: alt(); break;
			
			case 5: remoc(); break;
		}
	}
	
	getch();
	return 0;
}
