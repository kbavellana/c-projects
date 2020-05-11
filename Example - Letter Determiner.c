#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char nm[80];
    char let;

    
    printf("\n \n \t \t Letter Determiner");
    
    printf("\n \n Hi, what's your name? : ");
    gets(nm);
    printf("\n \n Please enter a single letter : ");
    scanf(" %c",&let);
    let=toupper(let);
    let=tolower(let);

    switch(let)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("\n \n %s, that's a vowel",nm);break;
        case 'b': case 'c': case 'd': case 'h': case 'f': case 'g': case 'z':
        case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'x':
        case 'q': case 'r': case 's': case 't': case 'y': case 'v': case 'w':
            printf("\n \n %s, that's a Consonant.",nm);break;                
        default:printf("\n \n Error 404.");break;
    }
    
    getch();
}
