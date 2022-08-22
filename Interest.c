#include<stdio.h>
float si(int p ,int r,int t)
{
	float SI;
	SI = (p*r*t)/100;
	return SI;
}
void main()
{
	int a,b,c;
	printf("Enter the Principal amount = ");
	scanf("%d",&a);
	printf("Enter the years = ");
	scanf("%d",&b);
	printf("Enter the parameters = ");
	scanf("%d",&c);
	
	printf("simple Interest = %f",si(a,b,c));
}


