#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int main()
{   char word[80];
    int counm_result;
    
    system("cls");
            printf("\n\t\t\t ~Count The Characters~");
            printf("\n \n enter the word you want to count the characters. \n Word : ");
            scanf("\n");
            gets(word);
            counm_result = strlen(word);
            printf("That is %d characters including all non-letters.",counm_result);
    
    getch();
    return 0;
}
