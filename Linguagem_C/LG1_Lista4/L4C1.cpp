#include<stdio.h>
#include<conio.h>

int main()
{
	int RAV[9], RAC[9], i;
	printf("\tPrograma que lera um RAV de 9 digitos e exibira o RAC\n\n");
	printf("Entre com o valor do RAV: \n\n");
	
	for(i=0;i<=8;++i)
	{
		scanf ("%d", &RAV[i]);
	}
	
	RAC[0]=RAV[0];
	RAC[1]=RAV[1];
	RAC[2]=RAV[7];
	RAC[3]=RAV[6];
	RAC[4]=RAV[4];
	RAC[5]=RAV[5];
	RAC[6]=RAV[2];
	RAC[7]=RAV[3];
	RAC[8]=RAV[8];
	
	printf("\n\nO valor do RAC eh:");
	
	for(i=0;i<=8;++i)
	{
		printf("\n%d", RAC[i]);
	}
	
	getch();
	return 0;
}
