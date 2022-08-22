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
	   if(n>=1 && n<=31)
	  {
	  	printf("\nJanuary");
	  }
	  else if(n>31 && n<=59)
	  {
	  	printf("\nfebruary");
	  }
	  else if(n>59 && n<=90)
	  {
	  	printf("\nMarch");
	  }
	  else if(n>90 && n<=120)
	  {
	  	printf("\nApril");
	  }
	  else if(n>120 && n<=151)
	  {
	  	printf("\nMay");
	  }
	  else if(n>151 && n<=181)
	  {
	  	printf("\nJune");
	  }
	  else if(n>181 && n<=212)
	  {
	  	printf("\nJuly");
	  }
	  else if(n>212 && n<=243)
	  {
	  	printf("\nAugust");
	  }
	  else if(n>243 && n<=273)
	  {
	  	printf("\nSeptember");
	  }
	  else if(n>273 && n<=304)
	  {
	  	printf("\nOctober");
	  }
	  else if(n>304 && n<=334)
	  {
	  	printf("\nNovember");
	  }
	  else if(n>334 && n<=365)
	  {
	  	printf("\nDecember");
	  }
	  getch();
}

