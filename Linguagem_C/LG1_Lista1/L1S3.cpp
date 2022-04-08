#include<stdio.h>
#include<conio.h>

int main ()
{
	float volume, r, altura;
	
	printf("Entre com raio da lata de oleo: ");
	scanf("%f", &r);
	printf("Entre com altura da lata de oleo");
	scanf("%f", &altura);

	volume= 3.14159 * r * r * altura;
	
	printf("O volume da lata eh: %f", volume);
	
	getch();
	return 0;
}
