#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r,x;
	clrscr();
	printf("Enter the radius = ");
	scanf("%f",&r);
	x = 2*PI*r;
	printf("Perimeter of circle : \n\nx=2*PI*r\n");
	printf("x=%.2f",x);
	getch();
}