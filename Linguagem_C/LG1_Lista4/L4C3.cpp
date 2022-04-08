#include<stdio.h>
#include<conio.h>

int main()
{
	int RA[9], RA2[9], i;
	printf("\tPrograma que lera um RA de 9 digitos e exibira um RA invertendo os 4 digitos menos significativos do RA inicial\n\n");
	printf("Entre com o valor do RA: \n\n");
	
	for(i=0;i<=8;++i)
	{
		scanf ("%d", &RA[i]);
	}
	
	RA2[0]=RA[1];
	RA2[1]=RA[0];
	RA2[2]=RA[2];
	RA2[3]=RA[3];
	RA2[4]=RA[4];
	RA2[5]=RA[5];
	RA2[6]=RA[6];
	RA2[7]=RA[8];
	RA2[8]=RA[7];
	
	printf("\n\nO valor do RA eh:");
	
	for(i=0;i<=8;++i)
	{
		printf("\n%d", RA2[i]);
	}
	
	getch();
	return 0;
}
