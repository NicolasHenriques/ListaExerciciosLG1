#include<stdio.h>
#include<conio.h>

int main()
{
	char Alt;
	float x, y, R;
	printf("\t\tCalculadora\n\n");
	printf("Escolha entre:\n+ (adicao)\n- (subtracao)\n* (multiplicacao)\n/ (divisao)\nS (para finalizar o programa)");
	printf("\n\nEscolha uma operacao: ");
	scanf("%c", &Alt);
	
	switch(Alt)
	{
		case'+':
		{
			printf("\n\nVoce escolheu adicao!\n\nEntre com o primeiro valor: ");
			scanf("%f", &x);
			printf("Entre com o segundo valor: ");
			scanf("%f", &y);
			R=x+y;
			printf("\nA soma dos dois eh: %.2f", R);
		}
		
		case'-':
		{
			printf("\n\nVoce escolheu subtracao!\n\nEntre com o primeiro valor: ");
			scanf("%f", &x);
			printf("Entre com o segundo valor: ");
			scanf("%f", &y);
			R=x-y;
			printf("\nO primeiro valor menos o segundo eh: %.2f", R);
		}
		
		case'/':
		{
			printf("\n\nVoce escolheu divisao!\n\nEntre com o primeiro valor: ");
			scanf("%f", &x);
			printf("Entre com o segundo valor: ");
			scanf("%f", &y);
			R=x/y;
			printf("\nO primeiro valor dividido pelo segundo eh: %.2f", R);
		}
		
		case'*':
		{
			printf("\n\nVoce escolheu multiplicacao!\n\nEntre com o primeiro valor: ");
			scanf("%f", &x);
			printf("Entre com o segundo valor: ");
			scanf("%f", &y);
			R=x*y;
			printf("\nO primeiro valor vezes o segundo eh: %.2f", R);
		}
		
		case's':
		{
			return 0;
		}
		
		case'S':
		{
			return 0;
		}
	}
	
	getch();
	return 0;
}
