#include<stdio.h>
#include<conio.h>
main()
{
       int a,b,c;
       clrscr();
       printf("Enter the A = ");
       scanf("%d",&a);
       printf("Enter the B = ");
       scanf("%d",&b);
       c=a;
       a=b;
       b=c;
       printf("\n\nSwap A = %d\n\n",a);
       printf("Swap B = %d",b);
       getch();
}