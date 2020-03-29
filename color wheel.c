#include <stdio.h>
#include <conio.h>
#include <windows.h>

int funct(void);

int main()
{ char nm[80],loop;
    int color, wheel , ctr=0,cntr=0;
    
    printf("\t\t Peryahan sa Kanto sa Computer Hahaha");
    printf("\n\n Pangalan:");
    gets(nm);
    printf("\n\n 1. Pula \n 2. Puti \n 3. Asul \n 4. Dilaw \n 5. Berde \n 6. Lila");
    printf("\n\nPiliin ang numero ng iyong gustong kulay:");
    scanf("%d",&color);
    system("cls");
    
    wheel=funct();
    
    switch(wheel)
    {   case 1: printf("\n Ang kulay ay Pula"); break;
        case 2: printf("\n Ang kulay ay Puti");break;
        case 3: printf("\n Ang kulay ay Asul");break;
        case 4: printf("\n Ang kulay ay Dilaw");break;
        case 5: printf("\n Ang kulay ay Berde");break;
        case 6: printf("\n Ang kulay ay Lila");break;
        default: printf("error.");break;    
    }
    if(wheel==color)
        printf("%s, Yes, Panalo siya. balato naman!!", nm);
        else
        printf("Paumanhin, talo ka. bitter lock necks time.");
    
    getch();
    return 0;
    
}
int funct(void)
{   int y=0,x=0,x2=0,w=0,a=0;
        do{y++;
            printf("Enter a number : ");
            scanf("%d",&x);
            a=x+x2;
            x2=a;
            }while(x!=0);
        y--;
        w=x2/y;
    return w;
}

