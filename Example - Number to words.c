#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char nm[80];
    int given,o,t,h,th,a,b,c,d;
    
    printf("\n \n Hi, what's your name? : ");
    gets(nm);
    printf("Enter a number. \n 1-3000 only. :  ");
    scanf(" %d",&given);
    if (given>=1 && given<=3000)
    {   printf("\n \n %s, %d is equal to ",nm,given);
            th=given/1000;
            switch(th)
                {
                    case 0: printf(" ");break;
                    case 1: printf(" one thousand");break;
                    case 2: printf(" two thousand");break;
                    case 3: printf(" three thousand");break;
                    default:printf("\n \n Error 404.");
                }
            h=(given%1000)/100;
            switch(h)
                {
                    case 0: printf(" ");break;
                    case 1: printf(" one hundred");break;
                    case 2: printf(" two hundred");break;
                    case 3: printf(" three hundred");break;
                    case 4: printf(" four hundred");break;
                    case 5: printf(" five hundred");break;
                    case 6: printf(" six hundred");break;
                    case 7: printf(" seven hundred");break;
                    case 8: printf(" eight hundred");break;
                    case 9: printf(" nine hundred");break;
                    default:printf("\n \n Error 404.");
                }
            a=given%1000%100;
            t=a/10;
            if (t>1 && t<=9)
            {
            switch(t)
                {
                    case 0: printf(" ");break;
                    case 2: printf(" twenty");break;
                    case 3: printf(" thirty");break;
                    case 4: printf(" forty");break;
                    case 5: printf(" fifty");break;
                    case 6: printf(" sixty");break;
                    case 7: printf(" seventy");break;
                    case 8: printf(" eighty");break;
                    case 9: printf(" ninety");break;
                    default:printf("\n \n Error 404.");
                }
            b=given%1000%100%10;
            o=b/1;
                switch(o)
                {
                    case 0: printf(" ");break;
                    case 1: printf(" one.");break;
                    case 2: printf(" two.");break;
                    case 3: printf(" three.");break;
                    case 4: printf(" four.");break;
                    case 5: printf(" five.");break;
                    case 6: printf(" six.");break;
                    case 7: printf(" seven.");break;
                    case 8: printf(" eight.");break;
                    case 9: printf(" nine.");break;
                    default:printf("\n \n Error 404.");
                }  
            }
            else if (t=1)
            {
                c=given%1000%100%10;
                
                switch(c)
                {
                    case 0: printf(" ");break;
                    case 1: printf(" eleven.");break;
                    case 2: printf(" twelve.");break;
                    case 3: printf(" thirteen.");break;
                    case 4: printf(" fourteen.");break;
                    case 5: printf(" fifteen.");break;
                    case 6: printf(" sixteen.");break;
                    case 7: printf(" seventeen.");break;
                    case 8: printf(" eighteen.");break;
                    case 9: printf(" nineteen.");break;
                    default:printf("\n \n Error 4044.");
                }
            }
        }
        else
            printf("\n \n Only 1- 3000");
getch();
}
