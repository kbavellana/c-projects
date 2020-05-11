#include <stdio.h>
#include <conio.h>
int main()
{
    char nm[80];
    int m,d;
    
    printf("\n 'Zodiac Sign Determiner'");
    printf("\n \n Hi, What's your name?");
    gets(nm);
    printf("\n \n Enter your Birthmonth : ");
    scanf("%d",&m);
    printf("\n \n Enter your Day of Birth : ");
    scanf("%d",&d);
    
    switch (m)
    {
        case 1:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19:
                printf("\n Capricorn \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31: case 20:
                printf("\n Aquarius \n "); break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 2:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    
                printf("\n Aquarius \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 19: case 20:
                printf("\n Pisces \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 3:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:
                printf("\n Pisces \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Aries \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 4:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: 
                printf("\n Aries \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30:case 20:
                printf("\n Taurus \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 5:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:
                printf("\n Taurus \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Gemini \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 6:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:
                printf("\n Gemini \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Cancer \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 7:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20: case 21: 
                printf("\n Cancer \n ");break;
               case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Leo \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 8:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:case 21: case 22: case 23:
                printf("\n Leo \n ");break;
                 case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Virgo \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 9:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20: case 21: case 22:
                printf("\n Virgo \n ");break;
                case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30:
                printf("\n Libra \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 10:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20: case 21: case 22:
                printf("\n Libra \n ");break;
                case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Scorpio \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 11:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:case 21: 
                printf("\n Scorpio \n ");break;
                case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30:
                printf("\n Sagittarius \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
        case 12:
            {
             switch(d)
             {
                case 1: case 2: case 3: case 4: case 5: case 6:
                case 7: case 8: case 9: case 10: case 11: case 12:
                case 13: case 14: case 15: case 16: case 17: case 18:
                    case 19: case 20:
                printf("\n Sagittarius \n ");break;
                case 21: case 22: case 23: case 24: case 25: case 26:
                    case 27: case 28: case 29: case 30: case 31:
                printf("\n Capricorn \n ");break;
                default:(" \n Error 123.");
             }   
            }
            break;
    default:printf("\007\n Error 123.");
    }
getch();
}
