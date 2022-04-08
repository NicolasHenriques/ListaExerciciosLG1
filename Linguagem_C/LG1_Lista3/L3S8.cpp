#include<stdio.h>
#include<conio.h>

int main()
{
	int cont, x, y, z;
	printf("\tSequencia de Fibonacci ate o decimo quinto termo\n\n");
	x=0*1;
	y=1*1;
	
    for (cont=1;cont<=15;++cont)
    {
        printf("\n%d", x);
        z=x+y;
        x=y;
        y=z;
    }
	
	getch();
	return 0;
}
