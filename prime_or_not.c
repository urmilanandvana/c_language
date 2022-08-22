#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    clrscr();

    printf("enter the any number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
	 if(i%3!=0 && i%2!=0)
	 {
	    printf("%d\t",i);
	 }
    }

    getch();
}


