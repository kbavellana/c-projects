#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    
    for(x=3;x>=1;x--)
    {
        for(y=1;y<=x;y++)
            printf("%d ",x);
        printf("\n\n");
    }
    getch();
}
