#include<stdio.h>
#include<conio.h>
main()
{
    int f,l,n,sum;
    clrscr();
    printf("enter the any number = ");
    scanf("%d",&n);

    l=n%10;

    while(n>=10)
    {
       n=n/10;
       f=n;
       sum=f+l;
    }
    printf("sum = %d",sum);
    getch();

}


