#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{   char nm[80],res;
    int x;
    
    do{system("cls");
    printf("\n This is the First 10 integer.\n");
    for(x=1;x<=10;x++)
    printf("%d\t",x);
    printf("press 'y' for another or any other key to exit.");
    scanf(" %c",&res);
    }while(res=='y' || res=='Y');
    printf("Thank you for using my program!");
    getch();
}
