#include<stdio.h>
#include<conio.h>

int main ()
{	
	float distancia, tempo, velocidade, litros_usados;
	
	printf("Entre com o tempo: ");
	scanf("%f", &tempo);
	printf("Entre com a velocidade: ");
	scanf("%f", &velocidade);
    
	distancia = (tempo * velocidade);
	litros_usados = (distancia / 12);

	printf("O valor da velocidade eh: %f", velocidade);
	printf("O valor do tempo eh: %f", tempo);
	printf("O valor da distancia eh: %f", distancia);
	printf("A quantidade de litros usados foi: %f", litros_usados);
	
	getch();
	return 0;
}
