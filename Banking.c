#include<stdio.h>
#include<conio.h>

int main()
{
    char name[90],dec;
    int res;
    float des,depo,wit,with,mon=20000;
    
    printf("\n \n \t\t\t\t ~BANGKO SILYA~");
    printf("\n \n \t\t\t the bank that cares for you!");
    printf("\n \n Enter Customer's Name: ");
    gets(name);
    do{ printf("\n\n\n Hello, %s, What can I do for you?",name);
        printf("\n press one of the following \n '1' = Deposit \n '2' = withdraw \n '3' = enquire. \n Response :  ");
        scanf("%d", &res);
        switch (res)
        {case 1:
           {printf("\n\n \t\t\t ~DEPOSIT SLIP~\n \n ");
            printf("how much will you deposit? : ");
            scanf("%f",&des);
            depo=mon+des;
            mon=mon+des;
            printf("\n \n your balance now is : %.2f", depo);break;}
         case 2:
           {printf("\n\n \t\t\t ~WITHDRAWAL SLIP~\n \n ");
            printf("\n how much will you withdraw? : ");
            scanf("%f",&wit);
                if (wit<=mon)
                {with=mon-wit;  
                 mon=mon-wit;
                 printf("\n \n your balance now is : %.2f",with);
                }
                else if (wit>mon)
                    {printf("\n \n you're trying to withdraw a bigger amount than the deposited amount.");}
                else
                    printf("\n \n Error 404.");break; }
        case 3:
            {   printf("\n\n \t\t\t ~INQUIRE~\n \n ");
                printf("your balance is : %.2f",mon);break;}
         default:printf("Error. press 1-3 only.");
         }
        printf("\n \n Press 'y' for another  transaction or any other key to exit. : ");
        scanf(" %c",&dec);
        printf("\n ****************************************");
        
      }    
      while(dec=='y');
      
      printf("\n \n \t\t\t\tThank you! %s!",name);
    
getch();
}   
