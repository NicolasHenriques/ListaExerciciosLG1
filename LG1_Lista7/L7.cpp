#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int menu, i, j, pesq, acha, z;
	char y[50], alt[50];
	while(menu!=5)
	{
		system("cls");
		printf("\tPrograma Agenda\n\n");
		printf("1. Cadastro e registro\n");
		printf("2. Pesquisa de registro\n");
		printf("3. Classificacao alfabetica\n");
		printf("4. Alteracao de registro\n");
		printf("5. Sair\n\n");
		scanf("%d", &menu);
		
		struct cad
		{
			char nm[50];
			char end[60];
			char tel[12];
			int id;
		};
		
		struct cad x[5];
	
		switch(menu)
		{
			case 1:
			//cadastro
			{	
				for(i=0;i<=4;++i)
				{
					system("cls");
					
					printf("------------ CADASTRO %d ------------", i+1);
				
					printf("\n\nEntre com o nome: ");
					fflush(stdin);
					fgets(x[i].nm, 50, stdin);
					
					printf("Entre com a idade: ");
					scanf("%d", &x[i].id);
					
					printf("Entre com o endereco: ");
					fflush(stdin);
					fgets(x[i].end, 60, stdin);
					
					printf("Entre com o numero de telefone: ");
					fflush(stdin);
					fgets(x[i].tel, 12, stdin);
				}
			} break;
			
			case 2:
			//pesquisa
			{
				system("cls");
				
				printf("------------ PESQUISA ------------");
				printf("\n\nEntre com a idade a ser pesquisada: ");
				scanf("%d", &pesq);
				acha=0;
				i=0;
				
				while(i<=4)
				{	
					if(pesq==x[i].id)
					{
						acha=1;
					}
					
					else
					{
						acha=0;
					}
					
					if(acha==1)
					{
						printf("\n\nA pessoa que tem %d anos:\n", pesq);
						printf("Nome: %s", x[i].nm);
						printf("Endereco: %s", x[i].end);
						printf("Telefone: %s", x[i].tel);
					}
					
					i+=1;
				}
				
				printf("\n\nAperte qualquer tecla para voltar para o menu.");
				getch();
				
			} break;
			
			case 3:
			//ordenação em ordem alfabetica
			{
				system("cls");
				
				printf("------------ ORDENACAO ------------\n\n");
				
				for(i=0;i<=4;++i)
				for(j=i+1;j<=4;++j)
				{
					if(strcmp(x[i].nm,x[j].nm)>0)
					{
						strcpy(y, x[i].nm);
						strcpy(x[i].nm, x[j].nm);
						strcpy(x[j].nm, y);
						
						strcpy(y, x[i].end);
						strcpy(x[i].end, x[j].end);
						strcpy(x[j].end, y);
						
						strcpy(y, x[i].tel);
						strcpy(x[i].tel, x[j].tel);
						strcpy(x[j].tel, y);
						
						z=x[i].id;
						x[j].id=x[i].id;
						x[i].id=z;
					}
				}
				
				for(i=0;i<=4;++i)
				{
					printf("%s", x[i].nm);
				}
				
				printf("\n\nAperte qualquer tecla para continuar.");
				getch();
				
			} break;
			
			case 4:
			//alteração de registro
			{
				system("cls");
				
				printf("------------ ALTERACAO ------------");
				printf("\n\nEntre com o nome para alterar o registro: ");
				
				fflush(stdin);
				fgets(alt, 50, stdin);
				
				acha=0;
				i=0;
				
				while(i<=4)
				{	
					if(strcmp(alt, x[i].nm)==0)
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
						fgets(x[i].nm, 50, stdin);
						
						printf("Entre com a nova idade: ");
						scanf("%d", &x[i].id);
						
						printf("Entre com o novo endereco: ");
						fflush(stdin);
						fgets(x[i].end, 60, stdin);
						
						printf("Entre com o novo telefone: ");
						fflush(stdin);
						fgets(x[i].tel, 12, stdin);
					}
					
					i+=1;
				}
				
				printf("\n\nAperte qualquer tecla para voltar para o menu.");
				getch();
				
			} break;
		}
	}
	
	return 0;
}
