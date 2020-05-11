#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char nm[80],res;
    int y;
    float x,x2,w,a;
    
    printf("\n \n Name : ");
    gets(nm);
    do{y=0; x=0; x2=0;
        {do
            {y++;
            printf("Enter a number : ");
            scanf("%f",&x);
            a=x+x2;
            x2=a;
            }
            while(x!=0);
            y--;
            w=a/y;
            printf("\n \n %s, the Total sum is: %.2f, the Average is : %.2f.",nm,a,w);
        }
      printf("\n ***************************************************");
      printf("\n \n press 'y' for another and any other key to exit. \n Response : ");
      scanf(" %c",&res);
      }
      while (res=='y'); 
      printf("\n \n %s, Thank you for using my program. ^_^ ^_^",nm);   
    getch();   
}
