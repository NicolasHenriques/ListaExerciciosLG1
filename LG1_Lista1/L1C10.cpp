#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c;
	
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;
	
	printf("Novo valor de a: %d, novo valor de b: %d", a, b);
	
	getch();
	return 0;
}
