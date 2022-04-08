#include<stdio.h>
#include<conio.h>

int main()
{
	float h, m, IMC;
	
	printf("Entre com a altura: ");
	scanf("%f", &h);
	printf("Entre com o peso: ");
	scanf("%f", &m);
	IMC = m / h ** 2;
	printf("O seu IMC eh: %f", IMC);
	
	getch();
	return 0;
}
