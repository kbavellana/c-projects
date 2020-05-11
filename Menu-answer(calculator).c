#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define fl float

fl sum (fl su1,fl su2); fl diff (fl di1,fl di2);
fl pro (fl pr1,fl pr2); fl quo (fl qu1,fl qu2);

int main()
{
    char nm[80] = {0};
    char loop_menu = {0};
    printf("\n \n \t\t Your name please ^_^ : ");
    gets(nm);
    do{
        int menu_res = 0;
        fl fir=0, sec=0;
    do{
    system("cls");
    printf("\n \n \t\t\t See-See \n\t\t    ~The C calculator~ ");
    printf("\n\nPress one of the following to operate it.");
    printf("\n '1' = Sum \n '2' = Difference \n '3' = Product \n '4' = Quotient \n '5 = Exit ");
    printf(" \n \n Response : ");
    scanf("%d", &menu_res);
    if (menu_res>=1 && menu_res<=4)
    {       printf("Enter 1st number : ");
            scanf("%f",&fir);
            printf("Enter 2nd number : ");
            scanf("%f",&sec);
            
             if(menu_res==1)
        {printf("\n \n %s, The Sum is : %.2f",nm,sum(fir,sec));}
        else if(menu_res==2)
        {printf("\n \n %s, The Difference is : %.2f",nm,diff(fir,sec));}
        else if(menu_res==3)
        {printf("\n \n %s, The Product is : %.2f",nm,pro(fir,sec));}
        else if(menu_res==4)
        {printf("\n \n %s, The Quotient is : %.2f",nm,quo(fir,sec));}
        
        do{ loop_menu = 0; 
            printf("\n press 'r' to go back to menu. : ");
            scanf(" %c",&loop_menu);  
          }while (loop_menu != 'r' && loop_menu != 'R');
    }
    else if(menu_res==5)
        {loop_menu = 0; printf("%s, Thank you for Using our See-see!",nm);}
    
    else
        {printf("Wrong input.");
        getch();}
    
    } while (menu_res >5 || menu_res <1); 
    } while (loop_menu == 'r' || loop_menu == 'R');
    
    printf("\n \n \t\t Until next time! =))");
    
    getch();
}

fl sum(fl su1,fl su2)
{    return su1+su2;}
fl diff(fl di1,fl di2)
{    return di1-di2;}
fl pro(fl pr1,fl pr2)
{    return pr1*pr2;}
fl quo(fl qu1,fl qu2)
{    return qu1/qu2;}
