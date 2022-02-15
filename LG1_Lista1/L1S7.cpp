#include<stdio.h>
#include<conio.h>

int main ()
{
	float CUSTO, NR_COELHOS;
	
	printf("Entre com o numero de coelhos: ");
	scanf("%f", &NR_COELHOS);
	CUSTO = (NR_COELHOS * 0.70);
	printf("O custo eh: %f", CUSTO);
	
	getch();
	return 0;
}
