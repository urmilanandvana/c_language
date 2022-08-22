int fact(int n)
{
	
 if(n==1)
 {
	return 1;
 }
 else
 {
    return  n*fact(n-1);
 }
}

void main()
{    
        int n;
        printf("Enter the any number = ");
        scanf("%d",&n);
	    printf("fact = %d",fact(n));
}









