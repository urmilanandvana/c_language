#include<stdio.h>
#include<conio.h>
main()
{
       float l,h,x;
       clrscr();
       printf("Enter the height = ");
       scanf("%f",&h);
       printf("Enter the length = ");
       scanf("%f",&l);
       printf("Area of rectangle : \n\n");

       x=l*h;

       printf("Area =%.2f",x);
       getch();
}