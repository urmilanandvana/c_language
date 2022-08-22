#include<stdio.h>
#include<conio.h>
main()
{
     int a,b;
     clrscr();
     printf("Enter the A = ");
     scanf("%d",&a);
     printf("Enter the B = ");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\n\nSwap A = %d",a);
     printf("\n\nSwap B = %d",b);
     getch();

}
