#include<stdio.h>
#include<conio.h>

int main ()
{	float p, v, tx, t;
	
	printf("Entre com o valor: ");
	scanf("%f", &v);
	printf("Entre com a taxa: ");
	scanf("%f", &tx);
	printf("Entre com o tempo: ");
	scanf("%f", &t);
	
	p = v + (v * (tx / 100) * t);
	
	printf("O valor da prestacao: %f", p);
	
	getch();
	return 0;
}
