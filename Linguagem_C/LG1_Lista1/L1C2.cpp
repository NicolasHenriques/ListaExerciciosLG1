#include<stdio.h>
#include<conio.h>

int main()
{
	float real, dolar;
	printf("Entre com o valor em Dolar: ");
	scanf("%f", &dolar);
	real = (dolar* 2.40);
	printf("O valor em Real eh: %f", real);
	
	getch();
	return 0;
}
