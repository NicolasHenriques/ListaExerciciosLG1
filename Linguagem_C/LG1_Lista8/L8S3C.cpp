#include<stdio.h>
#include<conio.h>

int entrada(float *a, float *b, float *c)
{
	printf("\n\nEntre com o valor: ");
	fflush(stdin);
	scanf("%f", &*a);
	
	printf("Entre com a taxa: ");
	fflush(stdin);
	scanf("%f", &*b);
	
	printf("Entre com o tempo: ");
	fflush(stdin);
	scanf("%f", &*c);
	
	return(0);
}
int calc(float *d, float *e, float *f, float *g)
{
	*g=*d+(*d * (*e/100) **f);
	
	return(0);
}
int saida(float *a)
{
	printf("\n\nO valor da prestacao eh: %.2f", *a);
}
int main()
{
	float prest, valor, taxa, tempo;
	
	printf("PROGRAMA QUE CALCULA O VALOR DE UMA PRESTACAO");
	
	entrada(&valor, &taxa, &tempo);
	
	calc(&valor, &taxa, &tempo, &prest);
	saida(&prest);
	
	getch();
	return 0;
}
