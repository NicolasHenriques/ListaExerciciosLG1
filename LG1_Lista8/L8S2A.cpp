#include<stdio.h>
#include<conio.h>

int entrada(int n)
{
	printf("\n\nEntre com o valor de N: ");
	scanf("%d", &n);
	
	return(n);
}
int calc(int n)
{
	int i;
	
	for(i=n-1;i>=0;--i)
	{
		n=n+i;
	}
	
	return(n);
}
int saida(int n)
{
	printf("\n\nO valor da soma eh: %d", n);
}
int main()
{
	int r;
	
	printf("\tSOMATORIA DOS N PRIMEIROS NUMEROS");
	
	r=entrada(r);
	r=calc(r);
	saida(r);
	
	getch();
	return 0;
}
