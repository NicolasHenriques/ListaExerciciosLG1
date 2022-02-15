#include<stdio.h>
#include<conio.h>

int main()
{
	float r, A, C;
	
	printf("Entre com o raio do circulo: ");
	scanf("%f", &r);
	A = 3.14 * r * r;
	C = 2 * 3.14 * r;
	printf("O valor da area eh: %f, e o comprimento: %f", A, C);
	
	getch();
	return 0;
}
