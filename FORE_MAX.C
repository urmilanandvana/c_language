#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c,d;
     clrscr();
     printf("Enter the A = ");
     scanf("%d",&a);
     printf("Enter the B = ");
     scanf("%d",&b);
     printf("Enter the C = ");
     scanf("%d",&c);
     printf("Enter the D = ");
     scanf("%d",&d);

    (a==b && b==c && c==d)
     ? printf("All value are sem...")
     :
       (a>b && a>c && a>d )
       ? printf("A is max")
       :
       (b>c && b>d)
       ? printf("B is max")
       :
       (c>d)
       ? printf("C is max")
       : printf("D is max");

      getch();
}