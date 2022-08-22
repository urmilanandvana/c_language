#include<stdio.h>
#include<conio.h>
main()
{
       int a,b,c;
       clrscr();
       printf("A = ");
       scanf("%d",&a);
       printf("B = ");
       scanf("%d",&b);
       c=a+b;
       printf("  - - - SUM - - -\n");
       printf("|                |\n");
       printf("|                |\n");
       printf("|    %d+%d=%d       |\n",a,b,c);
       printf("|                |\n");
       printf("|                |\n");
	printf("  - - - - - - - -\n");
	 c=a-b;
       printf("  - - - SUB - - -\n");
       printf("|                |\n");
       printf("|                |\n");
       printf("|    %d-%d=%d       |\n",a,b,c);
       printf("|                |\n");
       printf("|                |\n");
       printf("  - - - - - - - -\n");
	c=a*b;
       printf("  - - - MUL - - -\n");
       printf("|                |\n");
       printf("|                |\n");
       printf("|    %d*%d=%d       |\n",a,b,c);
       printf("|                |\n");
       printf("|                |\n");
	printf("  - - - - - - - -\n");
	 c=a/b;
       printf("  - - - DIV - - -\n");
       printf("|                |\n");
       printf("|                |\n");
       printf("|    %d/%d=%d       |\n",a,b,c);
       printf("|                |\n");
       printf("|                |\n");
	printf("  - - - - - - - -\n");
	 c=a%b;
       printf("  - - - MOD - - -\n");
       printf("|                |\n");
       printf("|                |\n");
       printf("|    %d%%%d=%d       |\n",a,b,c);
       printf("|                |\n");
       printf("|                |\n");
	printf("  - - - - - - - -\n");
       getch();
}

