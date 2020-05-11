#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
int main()
{   //Menu variables
    char nm[80], uni_res;
    int menu_res;
    //Ascending/descending Variables
    char asc_dec,mernu[80];
    float I,D,T;
    //Sum & average variables
    int y;
    float x,x2,sum,ave;
    //Factorial Variables
    int i;
    double f,n;
    //First 10 Variables
    int x_10;
    
    printf("\n Customer's Name : ");
    gets(nm);
    do{uni_res=0;
    do{system("cls");
    printf("\n \n \t\t\t~Program Compilation~\n \n \t Menu:");
    printf("Press one of the following :");
    printf("\n \n 1.Ascending/Descending \n 2.Sum and average \n 3. Factorial \n 4.1st ten integers. \n 5. Exit.");
    printf("\n \n Response : ");
    scanf("%d",&menu_res);
    
    if(menu_res==1)
            {do{
                system("cls");
                printf("\n\n\t\t\t~ASCENDING / DESCENDING~\n \n");
        
        printf("name : ");        
        gets(mernu);
        printf("Enter 1st Integer : ");
        scanf("%f",&I);
        printf("Enter 2nd Integer : ");
        scanf("%f",&D);
        printf("Enter 3rd Integer : ");
        scanf("%f",&T);
        printf("Ascending or Descending? (a/d) \n Response :  ");
        scanf(" %c",&asc_dec);
        printf("\n \n %s, Here it is : \n",nm);
            switch(asc_dec)
            {
                case 'a': case 'A':
                    {        if ((I<D && D<T) || (I==D && D==T) || (I==D && I<T))
                            printf("\n \n %.2f,%.2f ,%.2f ",I,D,T);
                        else if ((I<T && T<D) || (I==T && T<D) || (T==D && I<T))
                            printf("\n \n %.2f,%.2f ,%.2f ",I,T,D);
                        else if (D<I && I<T)
                            printf("\n \n %.2f,%.2f ,%.2f ",D,I,T);
                        else if ((D<T && T<I) || (D==T && D<I) || (T==I && D<T))
                            printf("\n \n %.2f,%.2f ,%.2f ",D,T,I);
                        else if ((T<I && I<D) || (T==I && I<D) || (I==D && T<D))
                            printf("\n \n %.2f,%.2f ,%.2f ",T,I,D);
                        else if (T<D && D<I)
                            printf("\n \n %.2f,%.2f ,%.2f ",T,D,I);
                        else
                            printf("\n Error A404.");
                        break;
                    }
                case 'd': case 'D':
                    {        if ((I>D && D>T) || (I==D && D==T) || (I==D && I>T))
                            printf("\n \n %.2f,%.2f ,%.2f ",I,D,T);
                        else if ((I>T && T>D) || (I==T && T>D) || (T==D && I>T))
                            printf("\n \n %.2f,%.2f ,%.2f ",I,T,D);
                        else if (D>I && I>T)
                            printf("\n \n %.2f,%.2f ,%.2f ",D,I,T);
                        else if ((D>T && T>I) || (D==T && D>I) || (T==I && D>T))
                            printf("\n \n %.2f,%.2f ,%.2f ",D,T,I);
                        else if ((T>I && I>D) || (T==I && I>D) || (I==D && T>D))
                            printf("\n \n %.2f,%.2f ,%.2f ",T,I,D);
                        else if (T>D && D>I)
                            printf("\n \n %.2f,%.2f ,%.2f ",T,D,I);
                        else
                            printf("\n Error A404.");
                        break;
                    }
                default:printf("\n \n Error. 'a' or 'd' only.");}
                printf("\n \n another? press 'y' for one or press 'r' to return to menu.\n Response : ");
                scanf(" %c",&uni_res);
            }while(uni_res=='y' || uni_res=='Y');
        }
        
    else if (menu_res==2)
        {   do
            {   system("cls");
                printf("\n\n\t\t\t ~SUM AND AVERAGE~\n\n");
                y=0,x=0,x2=0;
                for(x=1; x!=0; y++)
                {   printf("\n Enter a number :  ");
                    scanf("%f",&x);
                    sum=x+x2;
                    x2=sum;
                }
              y--;
              ave=x2/y;
              printf("\n %s, Here is the summary : \n Sum : %.2f \n Average : %.2f",nm,sum,ave);
              printf("\n\n press 'y' for another or press 'r' to return to menu.\n Response : ");
              scanf(" %c",&uni_res);
            }while(uni_res=='y' || uni_res=='Y');
        }
        
    else if (menu_res==3)
        {   do{ system("cls"); 
                printf("\n\n\t\t\t~FACTORIAL~\n\n");
                printf("\n Enter a number : ");
                scanf("%lf",&n);
                f=1;
                for(i=n;i>=1;i--)
                {f=f*i;}
                printf("\n The factorial value :\n %.2lf",f);
                printf("\n\n press 'y' for another or press 'r' to return to menu.\n Response : ");
              scanf(" %c",&uni_res);
         .,     }   
            while(uni_res=='y' || uni_res=='Y');
        }
        
    else if (menu_res==4)
            {   do{ system("cls");
                printf("\n This is the First 10 integer.\n");
                for(x_10=1;x_10<=10;x_10++)
                    printf("%d\t",x_10);
                printf("press 'y' for another or press 'r' to return to menu. \n Response : ");
                scanf(" %c",&uni_res);
            }while(uni_res=='y' || uni_res=='Y');
        }
        
    else if (menu_res==5) 
    {
        printf("\n\n \t\t\t~EXIT~  \n\t%s, Thank you for trying my program! ^_^",nm);
    }
    else
        printf("\n Only 1-5.");
    }while(menu_res>5 && menu_res<1);
    }while (uni_res=='r' || uni_res=='R');
    printf("\n \n \t\tUntil next time! ^_^");
    
getch();
}
