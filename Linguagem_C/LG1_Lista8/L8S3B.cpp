#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i;

int entrada(int *x)
{
	printf("%do elemento: ", i+1);
	scanf("%d", &*x);
	
	return(0);
}
int calculo(int *x, int y)
{
	*x=y;
	
	return(0);
}
int saida(int *x)
{
	printf("%do elemento: %d\n", i+1, *x);
	
	return(0);
}
int main()
{
	int a[30], b[30], c[60];
	
	printf("JUNCAO DE 60 ELEMENTOS EM UMA MATRIZ C\n\n");
	printf("Entre com 30 elementos de A: \n\n");
	
	for(i=0;i<=29;++i)
	{
		entrada(&a[i]);
	}
	
	system("cls");
	printf("Entre com 30 elementos de B: \n\n");
	
	for(i=0;i<=29;++i)
	{
		entrada(&b[i]);
	}
	
	system("cls");
	
	for(i=0;i<=29;++i)
	{
		calculo(&c[i], a[i]);
	}
	
	for(i=0;i<=29;++i)
	{
		calculo(&c[i+30], b[i]);
	}
	
	printf("Matriz C: \n\n");
	
	for(i=0;i<=59;++i)
	{
		saida(&c[i]);
	}
	
	getch();
	return 0;
}
