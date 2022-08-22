#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,k;
     clrscr();
     for(i=5;i>=1;i--)
     {
	  for(j=1;j<=i;j++)
	  {
	     printf("%d",j);
	  }
	  for(k=5*2;k>i*2;k--)
	  {
	    printf(" ");
	  }
	  for(j=i;j>=1;j--)
	  {
	     printf("%d",j);
	  }
	printf("\n");
     }
     for(i=1;i<=5;i++)
     {
	  for(j=1;j<=i;j++)
	  {
	     printf("%d",j);
	  }
	  for(k=5*2;k>i*2;k--)
	  {
	    printf(" ");
	  }
	  for(j=i;j>=1;j--)
	  {
	     printf("%d",j);
	  }
	printf("\n");
     }
     getch();
}



