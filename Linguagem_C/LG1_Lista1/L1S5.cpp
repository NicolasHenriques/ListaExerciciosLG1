#include<stdio.h>
#include<conio.h>

int main ()
{
	float x1, x2;
	
	printf("Entre com o valor de x: ");
	scanf("%f", &x1);

	x2 = (x1 * x1);
	
	printf("O valor de x ao quadrado eh: %f", x2);
	
	getch();
	return 0;
}
