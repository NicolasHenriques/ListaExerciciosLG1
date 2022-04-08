#include<stdio.h>
#include<conio.h>

int entrada(int *x)
{
	printf("\n\nEntre com o valor de N: ");
	scanf("%d", &*x);
	
	return(0);
}
int calc(int *a)
{
	int i, x, y, z;

	x=0;
	y=1;
	z=1;
	
	for(i=0;i<*a;++i)
	{
		printf("\n%d", z);
		z=x+y;
		x=y;
		y=z;
	}
}
int main()
{
	int n;
	
	printf("SEQUENCIA DE FIBONACCI ATE N TERMOS");
	
	entrada(&n);
	calc(&n);
	
	getch();
	return 0;
}
