#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,c=0;
    clrscr();
    printf("Enter the any number = ");
    scanf("%d",&n);
    for(;n>0;c++)
    {
	n=n/10;
    }
    printf("count number = %d",c);
    getch();
}




