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
     printf("Enter the C = ");
     scanf("%d",&c);
    (a==b && b==c)
     ? printf("All value are sem...")
     :
       (a<b)
       ?
	 (a<c)
	 ? printf("A is min")
	 : printf("C is min")
       :
	 (b<c)
	 ? printf("B is min")
	 : printf("C is min");
      getch();
}