#include<stdio.h>
#include<conio.h>

int main()
{
	float aa, la, ap, lp, qa, arp, ara;
	
	printf("Entre com a altura da parede: ");
	scanf("%f", &ap);
	printf("Entre com a largura da parede: ");
	scanf("%f", &lp);
	printf("Entre com a altura do azulejo: ");
	scanf("%f", &al);
	printf("Entre com a largura do azulejo: ");
	scanf("%f", &la);

	arp = ap * lp;
	ara = aa * la;
	qa = arp / ara;
	
	printf("O numero de azulejos eh: %f", qa);
	
	getch();
	return 0;
}
