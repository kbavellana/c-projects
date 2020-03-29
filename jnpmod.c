#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int  p1, p2, s1=0, s2=0;
	char nm[80],P1[80], P2[80],dec;
	
	printf("Name : ");
	gets(nm);
	printf("\n Enter player 1 name: ");
	gets(P1);
	printf("\n Enter player 2 name: ");
	gets(P2);
	printf("\n ~Directions: \n Enter : '0' = Rock \n \t '2' = scissors \n \t '5' = paper only. \n \t Any other number is not included. \n \n THE FIRST ONE WHO WILL GET 5 PTS. WILL WIN. \n\n \t\t\t ENJOY! ^_^");
do{ system("cls");	 
    while ((s1<5) && (s2<5))
	{ system("cls");
    printf("\n\n=================================");
    printf("\n\n Score : %s:%d \t %s:%d",P1,s1,P2,s2);
	printf("\n\n=================================");
	   do
        {printf("\n \n\t\t  %s, pambato mo? : ",P1);
	     scanf(" %d",&p1);
	
        	   if (p1!=0 && p1!=2 && p1!=5)
        	   printf("Invalid input!");

        }while (p1!=0 && p1!=2 && p1!=5);
	do
        {printf("\n \n\t\t  %s, pambato mo? : ",P2);
	     scanf(" %d",&p2);
	
        	   if (p2!=0 && p2!=2 && p2!=5)
        	   printf("Invalid input!");

        }while (p2!=0 && p2!=2 && p2!=5);
	
    printf("\n\n\t\t =================================");
	
		     if ((p1==0) && (p2==2))
			{
				printf("\n\t %s wins!", P1);
				printf("\n\t Rock breaks Scissors.");
				s1++;
			}
		else if ((p1==2) && (p2==0))
			{
				printf("\n\t %s wins!", P2);
				printf("\n\t Rock breaks Scissors.");
				s2++;	 
			}
		else if ((p1==0) && (p2==5))
			{
				printf("\n\t %s wins!", P2);
				printf("\n\t Paper covers Rocks.");
				s2++;	 
			}
		else if ((p1==5) && (p2==0))
			{
				printf("\n\t %s wins!", P1);
				printf("\n\t Paper covers Rock.");
				s1++;	 
			}
		else if ((p1==5) && (p2==2))
			{
				printf("\n\t %s wins!", P2);
				printf("\n\t Scissors cut Paper.");
				s2++;	 
			}
		else if ((p1==2) && (p2==5))
			{
				printf("\n\t %s wins!", P1);
				printf("\n\t Scissors cut Paper.");
				s1++;	 
			}
		else if ((p1==2 && p2==2) || (p1==5 && p2==5) || (p1==0 && p2==0))
			{
				printf("\n\t nobody wins.");
				printf("\n\t Both of you type the same number.");
		    }
		else
			{
				printf("\n\t unknown input data");
			}
		getch();
}
    printf("\n\t\t *************************************");
	printf("\n \n \n\t\t\t Final Result...");
	if (s1<s2)
		printf("\n %s wins!",P2);
	else if (s1>s2)
		printf("\n %s wins!",P1);
	else 
		printf("\n nobody wins.");

printf("\n\n \n \n  Do you want another Game?\n Press 'y' for yes or any other key to terminate the program. : ");
scanf(" %c",&dec);
		s1=0,s2=0; printf("********************************************************");
    }
	while (dec=='y' || dec=='Y');
return 0;
getch();
}
