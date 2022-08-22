#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,s,su,m,mo;
	 float d;
	 //clrscr();
	 scanf("%d",&a);
	 scanf("%d",&b);
	 s=a+b;
	 su=a-b;
	 m=a*b;
	 d=a/b;
	 mo=a%b;
	 printf("  _ _ SUM _ _   _ _ DIV _ _   _ _ MUL _ _   _ _ SUB _ _   _ _ MOD _ _\n");
	 printf("|            | |           | |           | |           | |           |\n");
	 printf("|            | |           | |           | |           | |           |\n");
	 printf("|    %d+%d=%d   | |  %d/%d=%.1f  | |   %d*%d=%d  | |   %d-%d=%d   | |   %d%%%d=%d   |\n",a,b,s,a,b,d,a,b,m,a,b,su,a,b,mo);
	 printf("|            | |           | |           | |           | |           |\n");
	 printf("|            | |           | |           | |           | |           |\n");
	 printf("  _ _ _ _ _ _   _ _ _ _ _ _   _ _ _ _ _ _   _ _ _ _ _ _   _ _ _ _ _ _\n");
	 getch();
}
