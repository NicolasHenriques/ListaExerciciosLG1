#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int N, M, R;
	printf("\tApresentar o valor de uma potencia de uma base qualquer elevada a um expoente qualquer\n\n");
	printf("Entre com o valor da base: ");
	scanf("%d", &N);
	printf("Entre com o valor do expoente: ");
	scanf("%d", &M);
	R=pow(N, M);
	printf("\nO resultado eh: %d\n", R);
	
	getch();
	return 0;
}
