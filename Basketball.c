#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{   char scrr_nm[80],fir_grp[20],sec_grp[20];  
    int drble, fir_scr=0, sec_scr=0, prev_score=0, score, MVP, i, g, p;
    int group[2] [5] = {0,0,0,0,0,0,0,0,0,0};
    
    
    printf("\n\n     Scorer's name : ");
    gets(scrr_nm);
    system("cls");
    printf("\n\n \t Notice: If you want the full interface working,\n\t\t please maximize the size of this box. \n\n\t\t\t THANK YOU! =) ");
    getch();
    printf("\n\n \t Warning: This game can only accept [2] groups. \n\t\t Each group can only contain [5] members. ");
    getch();
    system("cls");
    
    printf("\n\n\t\t~Welcome to the Basketball pointer!~\n\n ");
    printf("Enter 1st group's name: ");
    gets(fir_grp);
    printf(" Enter 2nd group's name: ");
    gets(sec_grp);
    
    int count=10,x=1;
    do{
            for(drble=x;drble<=count;drble++,x++)
            {g=0;p=0;score=0;
                system("cls");
            
                printf("-------------------");
            printf("\n|                 |");
            printf("\n|    Dribble %d    |",drble);
            printf("\n|                 |\n");
                printf("-------------------");
            
            printf("\n---------------------------------------------------------\n");
            printf("\n\nCurrent Scores:\t 1. %s : [%d]  \t\t\t\n  \n\t\t 2. %s : [%d]\t\t\t\n",fir_grp, fir_scr, sec_grp, sec_scr);
            printf("\n---------------------------------------------------------\n");
            
            do{
                printf("\n Team that scored[1/2]: ");
                scanf("%d",&g);
                 if ((g!=1 && g!=2) || (g>='a' && g<='z'))
                    {printf("\nError.\n");}
              }while((g!=1 && g!=2) || (g>='a' && g<='z'));
              
            do{
                printf("\n Player [1-5]: ");
                scanf("%d",&p);
                 if((p<1 || p>5) || (p>='a' && p<='z' ))
                    {printf("\nError.\n");}
              }while((p<1 || p>5) || (p>='a' && p<='z' ));    
            
            do{
                printf("\n Score [1-3] : ");
                scanf("%d",&score);
                  if((score<1 || score>3) || (score>='a' && score>='z'))
                    {printf("\nError.\n");}
              }while((score<1 || score>3) || (score>='a' && score>='z'));
            
            p--;
            
                 if(g==1)
            {   g--;
                fir_scr+=score;
                group[g] [p]+=score;
            }
            else if(g==2)
            {   g--;
                sec_scr+=score;
                group[g] [p]+=score;
            }
            
        }
        if (fir_scr==sec_scr)
        {count=count+3; printf("OOPS! WE HAVE A TIE BREAKER! ^_^");getch();}
    }while(fir_scr==sec_scr);   

system("cls");
    
    printf("\n--------------\n");
      printf("\nFinal Results\n");
    printf("\n--------------\n");
    
    printf("\n\t %s : %d \t\t\t\t %s: %d ",fir_grp, fir_scr, sec_grp, sec_scr);
    printf("\n\n\n Individual Scores : \n\n");
    printf("\t %s \t\t\t %s",fir_grp,sec_grp);
    
      for(i=1,p=0;p<5 && i<=5;p++)
        {   printf(" \n\n\tplayer %d : %d \t\t\t player %d : %d",i,group[0] [p],i,group[1] [p]);   
            i++;
        }
    
    if(fir_scr>sec_scr)
    printf("\n\n OUR WINNING TEAM is : %s! Congratulations!",fir_grp);
    else
    printf("\n\n OUR WINNING TEAM is : %s! Congratulations!",sec_grp);
    
    
    MVP=0;
    
    for(g=0;g<2;group [g++] [p])
    {
        for(p=0; p<5; group [g] [p++])
            if(MVP<=group[g][p])
            MVP=group[g][p];
    }
    printf("\n\n\nOur MOST VALUABLE PLAYER/s : ");
    g=0;
    do{p=0;
    do{
        if (group[g][p] != 0)
            if(MVP==group[g][p])
            {i=p+1;
        
    if (g==0)
        printf("\n\n Player %d of %s!! with score of %d points. \n CONGRATULATIONS!",i,fir_grp,MVP);
    else if (g==1)
        printf("\n\n Player %d of %s!! with score of %d points. \n CONGRATULATIONS!",i,sec_grp,MVP);
                
            }
    else;
        p++;
    }while( p<5);
    g++;
    }while(g<2);         
    
    getch();
    return 0;
}
