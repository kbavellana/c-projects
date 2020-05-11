#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
int main()
{   char nm[80], res;
    int m,m2,sol;
    
   do{ system("cls"); 
        printf("\n Enter a number : ");
        scanf("%d",&m);
        for(m2=1;m>=1;m--)
        { sol=m*m2; m2=sol; }
        printf("the answer is : %d.",m2);
        printf("\n Press 'y' for another or any other key to exit.");
        scanf(" %c",&res);
    }while(res=='y' || res=='Y');
    printf("\n Thank you for using my program!");
    
    getch();
}
