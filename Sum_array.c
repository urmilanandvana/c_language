sum(int a[] ,int n)
{
	int i,sum = 0 ;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}

void main()
{
	 int i,n,s,a[100];
	 printf("Enter the any number = ");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("a[%d]=",i);
	 	scanf("%d",&a[i]);
	 }
	 s= sum(a,n);
	 printf("sum = %d",s);
}


