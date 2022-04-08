#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Novo valor de a: %d, novo valor de b: %d", a, b);
	
	getch();
	return 0;
}
