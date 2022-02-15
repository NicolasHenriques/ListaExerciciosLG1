#include<stdio.h>
#include<conio.h>

int main()
{
	float real, dolar;
	printf("Entre com o valor em Real: ");
	scanf("%f", &real);
	dolar = real / 2.40;
	printf("O valor em Dolar eh: %f", dolar);
	
	getch();
	return 0;
}
