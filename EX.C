#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c,d,e;
     clrscr();
     printf("Enter the A = ");
     scanf("%d",&a);
     printf("Enter the B = ");
     scanf("%d",&b);
     printf("Enter the C = ");
     scanf("%d",&c);
     printf("Enter the D = ");
     scanf("%d",&d);
     printf("Enter the E = ");
     scanf("%d",&e);
    (a==b && b==c && c==d && d==e)
     ? printf("All value are sem...")
     :
       (a<b && a<c && a<d && a<e)
       ? printf("A is min")
       :
       (b<c && b<d && b<e)
       ? printf("B is min")
       :
       (c<d && c<e)
       ? printf("C is min")
       :
       (d<e)
       ? printf("D is min")
       : printf("E is min");

      getch();
}