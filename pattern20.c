#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,k;
   clrscr();
   for(i=1;i<=5;i++)
   {
       for(k=i;k<=5;k++)
       {
	 printf(" ");
       }
       for(j=1;j<=1;j++)
       {
	  printf("*");
       }
       for(k=2*2;k<=i*2;k++)
       {
	 printf(" ");
       }
       for(j=1;j<=1;j++)
       {
	 if(i!=1)
	 {
	 printf("*");
	 }
       }
       printf("\n");
   }
   getch();
}






