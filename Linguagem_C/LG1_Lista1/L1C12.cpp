#include<stdio.h>
#include<conio.h>

int main()
{
	float VM, T, E;
	
	printf("Entre com o espaço percorrido: ");
	scanf("%f", &E);
	printf("Entre com o tempo: ");
	scanf("%f", &T);

	VM = E / T;
	
	printf("A Velocidade Media do veiculo eh: %f", VM);
	
	getch();
	return 0;
}
