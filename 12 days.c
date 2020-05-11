#include <stdio.h>
#include <conio.h>

int main()
{
    char nm[80],res;
    int ly;
    printf("What's your name? : ");
    gets(nm);
    do{
        printf("\n \n '12 days of Christmas' \n %s, press a number from 1-12.",nm);
        scanf("%d",&ly);
        // copy paste, copy paste, copy paste.\\
        
        switch(ly)
            {           
            case 1:printf("\n On the first day of christmas my true love sent to me,\n A partridge in pair tree.");break;
            case 2:printf("\n on the 2nd day of christmas my true love sent to me,  \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 3:printf("\n on the 3rd day of christmas my true love sent to me, \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 4:printf("\n on the 4th day of christmas my true love sent to me, \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 5:printf("\n on the 5th day of christmas my true love sent to me,  \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 6:printf("\n on the 6th day of christmas my true love sent to me,  \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 7:printf("\n on the 7th day of christmas my true love sent to me,  \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 8:printf("\n on the 8th day of christmas my true love sent to me,  \n 8 maids a milking \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 9:printf("\n on the 9th day of christmas my true love sent to me,  \n 9 ladies dancing \n 8 maids a milking \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 10:printf("\n on the 10th day of christmas my true love sent to me, \n 10 lords are leaping \n 9 ladies dancing \n 8 maids a milking \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 11:printf("\n on the 11th day of christmas my true love sent to me, \n 11 pipers piping \n 10 lords are leaping \n 9 ladies dancing \n 8 maids a milking \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            case 12:printf("\n on the 12th day of christmas my true love sent to me, \n 12 drummers drumming \n 11 pipers piping \n 10 lords are leaping \n 9 ladies dancing \n 8 maids a milking \n 7 swans a swimming \n 6 geese a laying \n five golden rings! \n 4 calling birds \n 3 french hens \n 2 turtle doves \n and a partridge in a pear tree. ");break;
            default: printf("\n only 1-12.");break;
            }
    
    printf("\n \n Another? ? \n press 'y' for another and any other key to exit : ");
    scanf(" %c",&res);
    printf("\n ****************************************");}
    while(res=='y');
    printf("\n \n Thank you for using my program.^_^");
    
    getch();
}
