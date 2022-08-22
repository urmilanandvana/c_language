#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r,x;

	clrscr();
	printf("Radius = ");
	scanf("%f",&r);

	x = PI*r*r;

	printf("\nArea of Circle :\n\n");
	printf("x=PI*r*r\nx=%.2f",x);
	getch();
}