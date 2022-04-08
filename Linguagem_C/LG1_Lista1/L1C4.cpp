#include<stdio.h>
#include<conio.h>

int main()
{
	int A, P, a, b;
	
	printf("Entre com a altura do retangulo: ");
	scanf("%d", &a);
	printf("Entre com a largura do retangulo: ");
	scanf("%d", &b);
	A = (a * b);
	P = (2 * a) + (2 * b);
	printf("A area do retangulo mede: %d, e o perimetro: %d", A, P);
	
	getch();
	return 0;
}
