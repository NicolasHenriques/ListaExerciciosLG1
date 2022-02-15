#include<stdio.h>
#include<conio.h>

int main()
{
	float P1, P2, Ativ, Media;
	
	printf("Entre com a nota da primeira prova: ");
	scanf("%f", &P1);
	printf("Entre com a nota da segunda prova: ");
	scanf("%f", &P2);
	printf("Entre com a nota de atividade: ");
	scanf("%f", &Ativ);
	Media = (P1 * 4 + P2 * 4 + Ativ * 2) / 10;
	printf("A media semestral do aluno eh: %f", Media);

	getch ();
	return 0;
}
