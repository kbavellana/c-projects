#include <stdio.h>
#include <conio.h>

int main()
{
    char name[80],rec, cit;
    int ht,age;
    
    printf("\n \n ~Jedi Knight Academy~");
    printf("\n \n \n Hi student, what's your name? \n -");
    gets(name);
    printf("Are you recommended by Jedi Knight Obi Wan? \n  \n Press 'y' for yes and 'n' for no. \n Response : ");
    scanf(" %c",&rec);
    if ((rec=='y') || (rec=='Y'))
        printf("\n Congratulations, %s, You Have been accepted!",name);
    else if ((rec=='n') ||(rec=='N'))
        {
            printf("\n \n \n   Answer this questions honestly.");
            printf("\n \n  Height (in cm.) : ");
            scanf("%d",&ht);
            printf("\n \n Age:");
            scanf("%d",&age);
            printf("\n \n  Endorian? 'y' for yes and 'n' for no. : ");
            scanf(" %c", &cit);
                    if (ht>=200)
                        if (age>=21 && age<=25)
                            if (cit=='y' || cit=='Y')              
                                 printf("\n \n %s, You are accepted.",name);
                            else
                                printf("\n \n You're not an Endorian. \n  Try again next year.");
                        else 
                            printf("\n \n We only accept 21-25 jedi. \n  Try again next year.");
                    else
                        printf("\n \n you're too short...");
    }
    getch();
}
