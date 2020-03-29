#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{   char scrr_nm[80], grpon[30], grptw[30];
    int drbl,mvp,team,plyr,score,i;
    int gr1[5] = {0,0,0,0,0},p=0,tsc1=0;
    int gr2[5] = {0,0,0,0,0},q=0,tsc2=0;
    
    printf("\n \n \tScorer's Name : ");
    gets(scrr_nm);
    
    system("cls");
    printf("\n\n \t Notice: If you want the full interface working,\n\t\t please maximize the size of this box. \n\n\t\t\t THANK YOU! =) ");
    getch();
    printf("\n\n \t Warning: This game can only accept [2] groups. \n\t\t Each group can only contain [5] members. ");
    getch();
    system("cls");
    
    printf("\n\n\t\t~Welcome to the Basketball pointer!~\n\n ");
    printf("Enter 1st group's name: ");
    gets(grpon);
    printf(" Enter 2nd group's name: ");
    gets(grptw);
    
    int count=3,tie=1;
    do{
            for(drbl=tie;drbl<=count;drbl++,tie++)
             {team=0;plyr=0;score=0;
                system("cls");
            
                printf("-------------------");
            printf("\n|                 |");
            printf("\n|    Dribble %d    |",drbl);
            printf("\n|                 |\n");
                printf("-------------------");
            
            printf("\n---------------------------------------------------------\n");
            printf("\n\nCurrent Scores:\t 1. %s : [%d]  \t\t\t\n  \n\t\t 2. %s : [%d]\t\t\t\n",grpon,tsc1,grptw,tsc2);
            printf("\n---------------------------------------------------------\n");
            
            do{
            printf("\nTeam that Scored[1/2]: ");
            scanf("%d",&team);
            if(team!=1 && team!=2)
                printf("Error.");
              }while(team!=1 && team!=2);
            
            do{
                printf("\nPlayer that scored[1-5]: ");
                scanf("%d",&plyr);
                if(plyr<1 || plyr>5)
                printf("Error.");
              }while(plyr<1 || plyr>5 );
            
            do{
                printf("\nScore[0-3]: ");
                scanf("%d",&score);
                if(score<0 || score>3)
                    printf("Error.");
              }while(score<0 || score>3);
              
                     if(team==1)
                {   p=plyr-1;
                    gr1 [p]=gr1[p]+score;
                    tsc1=tsc1+score;
                }
                else if(team==2)
                {   q=plyr-1;
                    gr2[q]=gr2[q]+score;
                    tsc2=tsc2+score;
                }
                else;
            
        } 
        if(tsc1==tsc2)
        {   printf("OOPS! WE HAVE A TIE BREAKER!");
            getch();
            count=count+3;
        }
            
        }while(tsc1==tsc2);
        
    system("cls");
    
    printf("\n--------------\n");
      printf("\nFinal Results\n");
    printf("\n--------------\n");
    
    printf("\n\t %s : %d \t\t\t\t %s: %d ",grpon, tsc1, grptw, tsc2);
    printf("\n\n\n Individual Scores : \n\n");
    printf("\t %s \t\t\t %s",grpon,grptw);
    
      for(i=1,p=0,q=0 ; p<5 && q<5 && i<=5 ; p++,q++)
        {   printf(" \n\n\tplayer %d : %d \t\t\t player %d : %d",i,gr1[p],i,gr2[q]);   
            i++;
        }
        
    if(tsc1>tsc2)
    printf("\n\n OUR WINNING TEAM is : %s! Congratulations!",grpon);
    else
    printf("\n\n OUR WINNING TEAM is : %s! Congratulations!",grptw);
    
    mvp=0;
    p=0;
    q=0;
    //for finding highest score
    do{ if(mvp<=gr1[p])
            mvp=gr1[p];
        p++;
      }while(p<5);
      
    do{ if(mvp<=gr2[q])
            mvp=gr2[q];
        q++;
      }while(q<5);
    
    //for displaying mvp's
    
    for(p=0; p<5; p++)
     {   if (mvp==gr1[p])
        {i=p+1;
            printf("\n\nPlayer %d of %s! Congratulations!",i,grpon);
        }    
        else;
     }
     
     for(q=0; q<5; q++)
     {   if (mvp==gr2[q])
        {i=q+1;
            printf("\n\nPlayer %d of %s! Congratulations!",i,grptw);
        }    
        else;
     }
    getch();
    return 0;
}
