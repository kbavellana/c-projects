#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <dos.h>
main()
{
    char nm[80], giv[25];
    int z=1,x,a;
    
    
    printf("\n \n Hi, What's your name? : ");
    gets(nm);
    printf("\n \n %s, Please input a Sentence/word (25 characters only) \n Sentence : ",nm);
    gets(giv);
    printf("\n \n How many times you want to see it? : ");
    scanf("%d",&x);
    while (z<=x)
    
    {   printf("\n %d. %s",z,giv);
        z++;

    }
getch();
}
