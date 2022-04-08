#include<stdio.h>
#include<conio.h>

int main()
{
	int i, a[5], b[5];
	printf("\tEntre com 5 valores para serem multiplicados por 3\n\n");
	
	for (i=0;i<=4;++i)
	{
		scanf ("%d", &a[i]);
		b[i]=a[i]*3;
	}
		
	for (i=0;i<=4;++i) 
	{
		printf ("%d\n", b[i]);		
	}	
	
	getch();
	return 0;
}
