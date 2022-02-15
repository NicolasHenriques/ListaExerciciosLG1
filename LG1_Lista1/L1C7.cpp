#include<stdio.h>
#include<conio.h>

int main()
{
	float V, A, r;
	
	printf("Entre com o raio da esfera: ");
	scanf("%f", &r);
	V = 4 * 3.14 * r * r * r / 3;
	A = 4 * 3.14 * r * r;
	printf("O valor do Volume eh: %f, e da area: %f", V, A);
	
	getch();
	return 0;
}
