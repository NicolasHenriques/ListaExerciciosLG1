#include<stdio.h>
#include<conio.h>
#include<math.h>

int entrada(int *x, int *y)
{
	printf("\n\nEntre com o valor da base: ");
	scanf("%d", &*x);
	printf("Entre com o valor do expoente: ");
	scanf("%d", &*y);
	
	return(0);
}
int calc(int *x, int *y, int *z)
{
	*z=pow(*x, *y);
}
int saida(int *z)
{
	printf("\n\nO resultado eh: %d", *z);
}
int main()
{
	int base, expo, res;
	
	printf("PROGRAMA QUE CALCULA A POTENCIA DE UM NUMERO");
	
	entrada(&base, &expo);
	calc(&base, &expo, &res);
	saida(&res);
	
	getch();
	return 0;
}
