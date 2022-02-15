#include<stdio.h>
#include<conio.h>

int main ()
{
    float c, f;
     
    printf("Entre com a temperatura em fahrenheit: ");
    scanf("%f", &f);
    c = (((f - 32) * 5) / 9);
    printf ("A temperatura em graus Celsius eh: %f", c);
    
    getch();
    return 0;
}
