#include<stdio.h>
#include<conio.h>
#include<strings.h>
int main()
{
    char name[80], word[80];
    int len,i;
    
    printf("Enter word:");
    gets(word);
    len=strlen(word);
    printf("after:\n a%c",word[len-1]);
    for(i=0;i<len-1;i++)
        printf("%c",word[i]);
    getch();
    return 0;
}
