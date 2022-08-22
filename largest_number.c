#include<stdio.h>
larg(int a,int b,int c)
{
	if(a>b && a>c)
	{
		printf("A is big");
	}
	else if(b>c)
	{
		printf("B is big");
	}
	else
	{
		printf("C is big");
	}
}

void main()
{
	int a,b,c;
	printf("Enter the A  = ");
	scanf("%d",&a);
	printf("Enter the B  = ");
	scanf("%d",&b);
	printf("Enter the C  = ");
	scanf("%d",&c);
	printf("%d",larg(a,b,c));
}



