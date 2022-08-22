#include<stdio.h>
#include<conio.h>

main()
{
    int f=0,i,n,s=1,t=f+s;
    clrscr();
    printf("enter the any number = ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
	 printf("%d\t",t);
	 f=s;
	 s=t;
	 t=f+s;
    }
    getch();
}



