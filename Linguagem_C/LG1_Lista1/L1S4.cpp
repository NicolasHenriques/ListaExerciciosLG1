#include<stdio.h>
#include<conio.h>

int main ()
{
	int a, b, x;
	
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	
	x = a;
	a = b;
	b = x;

	printf("Novo valor de a: %d, novo valor de b: %d", A, B);
	
	getch();
	return 0;
}
