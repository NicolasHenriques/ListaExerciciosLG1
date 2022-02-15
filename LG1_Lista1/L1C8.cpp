#include<stdio.h>
#include<conio.h>

int main()
{
	float N1, N2, N3, N4, MF;
	
	printf("Entre com a primeira nota: ");
	scanf("%f", &N1);
	printf("Entre com a segunda nota: ");
	scanf("%f", &N2);
	printf("Entre com a terceira nota: ");
	scanf("%f", &N3);
	printf("Entre com a quarta nota: ");
	scanf("%f", &N4);

	MF = (N1 + N2 + N3 + N4) / 4;
	printf("A Media final do aluno eh: %f", MF);
	
	getch();
	return 0;
}
