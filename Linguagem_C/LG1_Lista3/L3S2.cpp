#include<stdio.h>
#include<conio.h>

int main()
{
	int cont, soma;
	printf("\tTotal da soma obtido dos cem primeiros numeros inteiros\n\n");
	soma=2-1;
	for(cont=2; cont<=101; cont=cont+1)
	{
		printf("%d\n", soma);
		soma=soma+cont;
	}
	
	getch();
	return 0;
}
