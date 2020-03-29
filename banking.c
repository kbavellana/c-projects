#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
int nbr_acc;

void withdraw(int usr_w,int numw);
void deposit (int usr_d,int numd);
void saving  (int usr_s,int nums);
struct vento
{
    int acnm;
    int pinm;
    int savings;
} user[20];

int main(void)
{
     FILE *tot, *pot, *rot, *aot;
    
    int i=0,j,ac,pn,x=3,y=3,resp;
    char ans,term;
do{ 
    
    tot = fopen("inventory.txt","a");
    pot = fopen("inventory.txt","r");
    rot = fopen("manipulating.txt","w");
    aot = fopen("manipulating.txt","a");
    
       system("cls");
            printf("\n \n \t\t\t\t ~BANGKO SILYA~");
            printf("\n \n \t\t\t the bank that cares for you!");
            
            do{
            fscanf(pot,"%d %d %d",&user[i].acnm,&user[i].pinm,&user[i].savings );
            i++;
              }
            while(!feof(pot));
            nbr_acc=i-1;
            
            
            do{
            printf("[%d]\n Enter your account number: ",y);
            scanf("%d",&ac);
              for(j=0;j<=nbr_acc;j++)
            {   if(ac==user[j].acnm)
                goto peyn;
                
            };    
                printf("\n\n\nSuch Account number don't exist. Please try again.");
                y--;
            }while(y!=0);
            if(y==0)
            goto end;
    
    
    
    peyn:
        printf("\nEnter your pin:");
        scanf("%d",&pn);
        if(pn==user[j].pinm)
        {printf("\n\nAccount login Success.");
        system("cls");
        goto labi;}
        else
        {x--;
        printf("\n\n\nInvalid pin. %d try left",x);
        if (x!=0)
         goto peyn;
         else 
         goto end;
        }
        
    labi: system("cls");
          printf("\n\n\t\tWelcome! How may I help you?");
          printf("\n\n\n\t'1' - Withdraw \t '2' - Deposit \n\t '3' - Check Savings \t '4' - Log out\n\n Response");
          scanf("%d",&resp);
          switch(resp)
          { case 1: withdraw(user[j].acnm,j);goto labi; break;
            case 2: deposit(user[j].acnm,j);goto labi;  break;
            case 3: saving(user[j].acnm,j);goto labi;   break;
            case 4:     c4:         
                    printf("\n\nAre you sure you want to logout? [Y/N]");
                    scanf(" %c",&ans);
                    if(toupper(ans)=='Y')
                    {system("cls");
                    for(i=0;i<nbr_acc;i++)
                    fprintf(rot,"%d %d %d\n",user[i].acnm,user[i].pinm,user[i].savings);
                    fclose(pot);
                    fclose(tot);
                    fclose(rot);
                    fclose(aot);
                    remove("inventory.txt");
                    rename("manipulating.txt","inventory.txt");
                     printf("\n\n\nAccount will be logout. \n Logging out... \n Logout Success.");  
                    }
                    else if(toupper(ans)=='N')
                    goto labi;
                    
                    else
                    {printf("\n\nError. [Y/N] only.");
                    goto c4;}
                    break;
            default:printf("Invalid. Try again."); goto labi; break;
            }
            
         
   termi:    printf("\n\nTerminate the program? [Y/N]");
             scanf(" %c",&term);
             if(term=='Y'||term=='y')
             goto end;
             else if (term=='N'||term=='n')
             ;
             else
             {
             printf("\n\nError. [Y/N] only.");
             goto termi;
            }
        
        
          
    
    fclose(pot);
    }while(term=='N'||term=='n');
    end:
        printf("The Program will exit. Thank you! ^_^");
    
    getch();
    
}


void withdraw(int usr_w,int numw)
{ int wit, with,i=0;;
  FILE *wot; 
   wid:
    system("cls");
    printf("\n\n\t\tWithdrawal Table");
            printf("\n\nBalance: %d",user[numw].savings);
            printf("\n how much will you withdraw? : ");
            scanf("%d",&wit);
                if (wit<=user[numw].savings)
                {with=user[numw].savings-wit;  
                 user[numw].savings-=wit;            
                 printf("\n \n your balance now is : %d",user[numw].savings);
                 goto endw;
                 
                }
                else if (wit>user[numw].savings)
                    {printf("\n \n you're trying to withdraw a bigger amount than the deposited amount.");
                    goto wid;}
                else
                    printf("\n \n Error 404.");
                   
    endw:
    getch();
}


void deposit (int usr_d,int numd)
{   
    int des,depo;
    system("cls");
    printf("\n\n\t\tDeposit Table");
    printf("\n\nBalance: %d",user[numd].savings);
            printf("how much will you deposit? : ");
            scanf("%d",&des);
            depo=user[numd].savings+des;
            user[numd].savings+=des;
            printf("\n \n your balance now is : %d", user[numd].savings);
    getch();
}



void saving  (int usr_s, int nums)
{system("cls");
    printf("Savings Table");
    printf("Your Balance is: %d",user[nums].savings);
    getch();
}
