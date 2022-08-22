#include<stdio.h>
#include<conio.h>

main()
{
    int choice,type;
    clrscr();
    printf("Press 1 English\nPress 2 Hindi\nPress 3 Gujrati\n\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1:
	   printf("Press 1 Special RECHARGE\n");
	   printf("Press 2 free caller tune\n");
	   printf("Press 3 RECHARGE plan\n\n");
	   printf("Enter your type = ");
	   scanf("%d",&type);

	   switch(type)
	   {
		case 1:
		    printf("your choose in special RECFHARGE");
		    break;
		case 2:
		    printf("your choose in free caller tune");
		    break;
		case 3:
		    printf("your choose in RECHARGE");
		    break;
		default:
		    printf("enter valid choice");
	   }
	   break;
       case 2:
	   printf("Special RECHARGE keliye 1 press kare\n");
	   printf("free caller tune keliye 2 press kare\n");
	   printf("RECHARGE plan keliye 3 press kare\n\n");
	   printf("Enter your type = ");
	   scanf("%d",&type);

	   switch(type)
	   {
	       case 1:
		   printf("Aapne special RECHARGE pasand kiya he ");
		   break;
	       case 2:
		   printf("Aapne free caller tune pasand ki he");
		   break;
	       case 3:
		   printf("Aapne RECHARGE plan pasand kiya he");
		   break;
	       default:
		   printf("aapki pasand amany he");
	   }
	   break;
     case 3:
	   printf(" Special RECHARGE mate 1 press karo\n");
	   printf(" free caller tune mate 2 press karo\n");
	   printf(" RECHARGE plan mate 3 press karo\n\n");
	   printf("Enter your type = ");
	   scanf("%d",&type);

	   switch(type)
	   {
	       case 1:
		   printf("Tame special RECHARGE pasand kariyu che ");
		   break;
	       case 2:
		   printf("Tame free caller tune pasand kariyu che");
		   break;
	       case 3:
		   printf("Tame RECHARGE plan pasand kariyo che");
		   break;
	       default:
		   printf("tamri pasand amany che");
	   }
	   break;
	   default:
	      printf("Invalid choice");
    }
    getch();
}
