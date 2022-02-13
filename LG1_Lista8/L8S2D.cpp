#include<stdio.h>
#include<conio.h>
#include<math.h>

int entrada(int x)
{
	printf("\n\nEntre com o valor da base: ");
	scanf("%d", &x);
	
	return(x);
}
int entrada2(int y)
{
	printf("Entre com o valor do expoente: ");
	scanf("%d", &y);
	
	return(y);
}
int calc(int x, int y)
{
	int z;
	z=pow(x, y);
	
	return (z);
}
int saida(int z)
{
	printf("\n\nO resultado eh: %d", z);
}
int main()
{
	int base, expo, res;
	
	printf("PROGRAMA QUE CALCULA A POTENCIA DE UM NUMERO");
	
	base=entrada(base);
	expo=entrada2(expo);
	res=calc(base, expo);
	saida(res);
	
	getch();
	return 0;
}
