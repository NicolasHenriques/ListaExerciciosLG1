#include<stdio.h>
#include<conio.h>

int entrada(int *a)
{
	printf("\n\nEntre com o valor de N: ");
	scanf("%d", &*a);
	
	return(0);
}
int calc(int *b)
{
	int i;
	
	for(i=*b-1;i>=0;--i)
	{
		*b=*b+i;
	}
	
	return(0);
}
int saida(int *c)
{
	printf("\n\nO valor da soma eh: %d", *c);
}
int main()
{
	int r;
	
	printf("\tSOMATORIA DOS N PRIMEIROS NUMEROS");
	
	entrada(&r);
	calc(&r);
	saida(&r);
	
	getch();
	return 0;
}
