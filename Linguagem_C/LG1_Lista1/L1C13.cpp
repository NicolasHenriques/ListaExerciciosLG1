#include<stdio.h>
#include<conio.h>

int main()

{
	float s, s0, a, v0, t;
	
	printf("Entre com o tempo: ");
	scanf("%f", &t);

	s0 = 2;
	v0 = 3;
	a = 10;
	s = s0 + v0 * t + 1/2 * a * t * t;
	printf("A distancia apos %f segundos foi: %f", t, s);
	
	getch();
	return 0;
}
