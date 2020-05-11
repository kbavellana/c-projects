#include <stdio.h>  
#include <conio.h>
#include <string.h> 
#include <windows.h>
int main()
{
    //main program
    char nm[80], main_res;
    int menu_res;
    
    //bato-bato pik varia
    int  p1, p2, s1=0, s2=0;
	char P1[80], P2[80],bbp_dec;
	
	//count the name varia
	char word[80];
    int counm_result;
    
	//factorial varia
	char fact_res;
	int mints;
	double fac_n,factor;
	
	//flames varia
    char fir_nm[100],sec_nm[100], *prbk;
    int points,points2,n1,n2,comp,occu=0;
    
    /*~Start of program~*/
    
    //main lobby
    printf("\n\t\t This is a Program Club. I'm the Guard here. \n\t Your name please : ");
    gets(nm);
    do{
    do{
    system("cls");
    printf("\n\n\t\tWELCOME! %s! PRESS ONE OF THE FOLLOWING : ",nm);
    printf("\n\n\t 1 = Bato - bato pik! \n\t 2 = Count the letters of the name \n\t 3 = Factorial \n\t 4 = F.L.A.M.E.S. \n\t 5 = Close the program ");
    printf("\n\n Response : ");
    scanf("%d",&menu_res);
    //Program list
        //start of BATO-BATO PIK!
        if(menu_res==1)
            { do{ system("cls");  
                printf("\t\t\t Bato - bato Pik!");
                printf("\n Enter player 1 name: ");
                scanf("\n");
            	gets(P1);
            	printf("\n Enter player 2 name: ");
            	gets(P2);
              
            	  printf("\n ~Directions: \n Enter : '0' = Rock \n \t '2' = scissors \n \t '5' = paper only. \n \t Any other number is not included. \n \n THE FIRST ONE WHO WILL GET 5 PTS. WILL WIN. \n\n \t\t\t ENJOY! ^_^");
                	 while ((s1<5) && (s2<5))
                	{
                	printf("\n \n \t\t  =================================");
                	printf("\n \n\t\t  %s, pambato mo? : ",P1);
                	scanf(" %d",&p1);
                	printf("\n\t\t %s, pambato mo? : ", P2);
                	scanf(" %d",&p2);
                	printf("\n\n\t\t =================================");
                		     if ((p1==0) && (p2==2))
                			{  	printf("\n %s wins!", P1);
                				printf("\n Rock breaks Scissors.");
                				s1++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);	
                			}
                		else if ((p1==2) && (p2==0))
                			{	printf("\n %s wins!", P2);
                				printf("\n Rock breaks Scissors.");
                				s2++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                		else if ((p1==0) && (p2==5))
                			{	printf("\n %s wins!", P2);
                				printf("\n Paper covers Rocks.");
                				s2++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                		else if ((p1==5) && (p2==0))
                			{	printf("\n %s wins!", P1);
                				printf("\n Paper covers Rock.");
                				s1++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                		else if ((p1==5) && (p2==2))
                			{   printf("\n %s wins!", P2);
                				printf("\n Scissors cut Paper.");
                				s2++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                		else if ((p1==2) && (p2==5))
                			{	printf("\n %s wins!", P1);
                				printf("\n Scissors cut Paper.");
                				s1++;
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                		else if ((p1==2 && p2==2) || (p1==5 && p2==5) || (p1==0 && p2==0))
                			{   printf("\n nobody wins.");
                				printf("\n Both of you type the same number.");
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                		    }
                		else if ((p1!=2 && p1!=5 && p1!=0) || (p2!=2 && p2!=5 && p2!=0))
                			{   printf("\n unknown input data");
                				printf("\n \n \t\t Score : %s:%d - %s:%d",P1,s1,P2,s2);
                			}
                    }
                    printf("\n\t\t ***************************************************");
                	printf("\n \n \n\t\t\t Final Result...");
                	if (s1<s2)
                		printf("\n %s wins!",P2);
                	else if (s1>s2)
                		printf("\n %s wins!",P1);
                	else 
                		printf("\n nobody wins.");
                do{
                printf("\n\n \n \n  Do you want another Game?\n Press 'y' for yes or press 'r' to go back to the main screen. \n Response : ");
                scanf(" %c",&main_res);
                		s1=0,s2=0;
                	if ((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'))
                        printf("\n 'r' or 'y' only.");
                  }while((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'));
                }
            	while (main_res=='y' || main_res=='Y');
            }
            
        //End of BATO-BATO PIK!
            
        //start of COUNT NAME
        else if (menu_res==2)
        {   do{
            system("cls");
            printf("\n\t\t\t ~Count The Characters~");
            printf("\n \n %s, enter the word you want to count the characters. \n Word : ",nm);
            scanf("\n");
            gets(word);
            counm_result = strlen(word);
            printf(" %s, that is %d characters including all non-letters.",nm,counm_result);
            do{
                printf("\n\n \n \n  Another?\n Press 'y' for yes or press 'r' to go back to the main screen. \n Response : ");
                scanf(" %c",&main_res);
                	if ((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'))
                        printf("\n 'r' or 'y' only.");
              }while((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'));
            }
            while (main_res=='y' || main_res=='Y');
        }
        /*end of COUNT NAME*/
        /*start  of FACTORIAL*/
        else if (menu_res==3)
        {
            do{ mints=0;factor=0;fac_n=0;
                system("cls"); 
                printf("\n\n\t\t\t~FACTORIAL~\n\n");
                printf("\n Enter a number : ");
                scanf("%lf",&fac_n);
                factor=1;
                if (fac_n>=1)
                {
                for(mints=fac_n;mints>=1;mints--)
                {factor=factor*mints;}
                printf("\n The factorial value :\n %.2lf",factor);
                }
                else 
                    {printf("\n Error. Enter only a number that is greater or equal to 1. ");}
                do{
                printf("\n\n \n \n  Another?\n Press 'y' for yes or press 'r' to go back to the main screen. \n Response : ");
                scanf(" %c",&main_res);
                	if ((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'))
                        printf("\n 'r' or 'y' only.");
                  }while((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'));
              }while(main_res=='y' || main_res=='Y');
        }
        
        //end of FACTORIAL
        
        //start of F.L.A.M.E.S.
        else if (menu_res==4)
        {do{
            system("cls");
            printf("\n \t\t ~F.L.A.M.E.S.~");
            printf("\n \t Your name : ");
            scanf("\n");
            gets(fir_nm);
            strlwr(fir_nm);
    
            printf("\n \t Crush name : ");
            gets(sec_nm);
            strlwr(sec_nm);

            for(points=0,n1=0; fir_nm[n1] != '\0'; fir_nm[n1++])
                {   if (fir_nm[n1] != ' ')
                    {for(n2=0;sec_nm[n2] != '\0'; sec_nm[n2++])
                         {if ((fir_nm[n1]==sec_nm[n2]) && (sec_nm[n2] != ' '))
                            {points++; }
                          else ;
                         }
                    }
                    else;     
                }
             prbk = strpbrk (fir_nm, sec_nm);
             while ((prbk != NULL) && (fir_nm != ' '))
             {  points++; prbk = strpbrk (prbk+1,sec_nm); }

        
          comp=points%6;
          
          printf("\n your results : ");
    switch(comp)
  {
    case 1: printf("Friend. \n\t Friends only. Sorry."); break;
    case 2: printf("Lovers. \n\t Yey! Lovers. you're one step closer to earn him/her."); break;
    case 3: printf("Anger. \n\t Stop daydreaming, you will only get him/her mad. Sorry."); break;
    case 4: printf("Marriage. \n\t The question is, will he/she become happy to you? "); break;
    case 5: printf("Engage. \n\t You have a 50 percent chance to marry him/her, \n\t and another 50 percent to lose him/her."); break;
    case 0: printf("Sweetheart. \n\t Don't be so happy. this is just a game."); break;
    default:printf("Error.");break;
  }
    do{ printf("\n\n \n \n  Another?\n Press 'y' for yes or press 'r' to go back to the main screen. \n Response : ");
        scanf(" %c",&main_res);
       	if ((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'))
             printf("\n 'r' or 'y' only.");
       }while((main_res!='r' && main_res!='R') && (main_res!='y' && main_res!='Y'));
       }while(main_res=='y' || main_res=='Y');
            
   }
     
        //end of F.L.A.M.E.S.
        
        //start of EXIT
        else if (menu_res==5)
        {    main_res = 0;
            printf("%s, Thank you for using my Program! ^_^",nm);
        }
        
        //end of EXIT
        else
            printf("1-5 only.");
            
    }while(main_res=='r' || main_res=='R');
    
    }while(menu_res>5 && menu_res<0 );
    
        printf(" \n \t Until next time! ^_^");
    
    getch();
}
