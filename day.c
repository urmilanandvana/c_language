#include<stdio.h>
#include<conio.h>
main()
{ 
      int n;
      printf("Enter the any number = ");
      scanf("%d",&n);
      if(n%7==1 && n<=365)
      {
      	printf("Saturday");
	  }
	  else if(n%7==2 && n<=365)
	  {
	  	printf("Sunday");
	  }
	  else if(n%7==3 && n<=365)
	  {
	  	printf("Monday");
	  }
	  else if(n%7==4 && n<=365)
	  {
	  	printf("Tuseday");
	  }
	  else if(n%7==5 && n<=365)
	  {
	  	printf("Wednesday");
	  }
	  else if(n%7==6 && n<=365)
	  {
	  	printf("Thursday");
	  }
	  else if(n%7==0 && n<=365)
	  {
	  	printf("Friday");
	  }
	  getch();
}

