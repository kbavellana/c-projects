#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <strings.h>
#include <ctype.h>
			char seatName1[]="XX",choice_column;
           int seatArrange[5][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
           int row,column,choice_row;
void seatDisplay();
void seatChoose();

int main() 
{
           
           char name[80],confirm_ans,choice_seat[3];
           int choice;
           

//program
           
           printf("\nHi, What's your name? \n Name: ");
           gets(name);
      one: system("cls");
      		printf("\n\t\t ~Prinsipe Airlines~\n\t An airline that treats you like a royal");
           printf("\n\tHello, %s, what can I do for you?",name);
           printf("\n\t\t[1] Display the Seat Arrangement      [3]Exit the Program \n \t\t[2] Input the Passenger's Choice \n Rresponse:");
           scanf("%d",&choice);
           if (choice > 3 || choice <1)
            goto one;
            switch(choice)
            {
               case 1: seatDisplay(); 
			   			confirm:
			            printf("\n\tProceed with the reservation/assigning[Y/N]? : ");
			            scanf(" %c",&confirm_ans);
			            if(confirm_ans == 'y'||confirm_ans == 'Y')
			            	{
								seatChoose();
							}
			            			
						else if(confirm_ans ==  'n'||confirm_ans == 'N')
							goto one;  			
						else{
							printf("y or n only.");
							getch();
							goto confirm;
							} 
					break;
               case 2: seatChoose(); 
			   		break;
               case 3: goto exit; break;
               default: printf("Sorry, I didn't get that."); getch();  break;
               
       
            }
            
     goto one;
     exit: printf("Thank you, %s!",name);
	 getch();
     return 0;  
                         
}
void seatDisplay()
{
	for(row=0; row<5; row++)
		{char seatName0='A';
			for(column=0;column<4; column++)
			{
				 if (seatArrange[row][column] == 0 )
				{
					printf("\t%d%c",row+1,seatName0);
				}
				else
					printf("\t%s",seatName1);
					seatName0++;
			}
			printf("\n"); 
		}
}
void seatChoose()
{
	two:
		
	printf("\n \tEnter seat number you want: ");
    scanf("%d",&choice_row); 
	scanf(" %c",&choice_column);   
	if (choice_row > 0 && choice_row < 6)
    	row= choice_row-1; 
    else
    	{
		printf("Sorry, the seat code is invalid. Please try again."); 
		getch(); 
		goto two;
		}
    
    switch(choice_column)
    {
     case 'A':
	 case 'a': column = 0; break;
     case 'B':
	 case 'b': column = 1; break;
     case 'C':
	 case 'c': column = 2; break;
     case 'D':
	 case 'd': column = 3; break;
     default: printf("The seat code is invalid. Please try again."); getch(); goto two; break;
	}
				
	if(seatArrange[row][column] == 1)
	{
	  printf("Sorry, that seat is already occupied, please choose another seat. Thank you.");
	  getch();
	}
	else if(seatArrange[row][column] == 0)
	{
	  seatArrange[row][column] = 1;
	  printf("\n\n\tYou have successfully reserve your seat! \n\tThank you for choosing our airline! :) ");
	  getch();
	}
					
					
}
