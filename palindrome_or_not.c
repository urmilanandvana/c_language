#include<stdio.h>
#include<conio.h>
main()
{
   int n,i,r,u=0;
   clrscr();
   printf("enter the number = ");
   scanf("%d",&n);
   i=n;
   while(n>0)
   {
      r=n%10;
      u=(u*10)+r;
      n=n/10;
   }
   if(u==i)
   {
       printf("palindrome");
   }
   else
   {
      printf("not palindrome");
   }
   getch();
}


