#include<stdio.h>
#include<conio.h>

int entrada1(float a)
{
	printf("\n\nEntre com o valor: ");
	fflush(stdin);
	scanf("%f", &a);
	
	return(a);
}
int entrada2(float b)
{
	printf("Entre com a taxa: ");
	fflush(stdin);
	scanf("%f", &b);
	
	return(b);
}
int entrada3(float c)
{
	printf("Entre com o tempo: ");
	fflush(stdin);
	scanf("%f", &c);
	
	return(c);
}
int calc(float a, float b, float c)
{
	float d;
	d=a+(a*(b/100)*c);
	
	return(d);
}
int saida(float a)
{
	printf("\n\nO valor da prestacao eh: %.2f", a);
}
int main()
{
	float prest, valor, taxa, tempo;
	
	printf("PROGRAMA QUE CALCULA O VALOR DE UMA PRESTACAO");
	
	valor=entrada1(valor);
	taxa=entrada2(taxa);
	tempo=entrada3(tempo);
	
	prest=calc(valor, taxa, tempo);
	saida(prest);
	
	getch();
	return 0;
}
