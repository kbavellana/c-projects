#include <stdio.h>
#include <conio.h>
int main()
{
    char nm[80];
    int n;
    
    printf("\n Enter your name : ");
    gets(nm);
    printf("\n \n  %s, Enter a number. from 1-10 only. :",nm);
    scanf("%d",&n);
    
    switch(n)
    {
        case 1: case 2: printf("\n \n %d \t One - two tie my shoes! ",n);break;
        case 3: case 4: printf("\n \n %d \t Three - four shut the door! ",n);break;
        case 5: case 6: printf("\n \n %d \t Five - six pick up sticks! ",n);break;
        case 7: case 8: printf("\n \n %d \t Seven - eight lay them straight! ",n);break;
        case 9: case 10: printf("\n \n %d \t Nine  - ten A big fat hen! ",n);break;
        default: printf("\n \n %d \t Oh me - Oh my! Time to say goodbye!",n);break;
    }
    getch();
}
