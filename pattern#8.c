#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    
    for(x=1;x<=3;x++)
    {
        for(y=3;y>=x;y--)
            printf("%d ",x);
        printf("\n\n");
    }
    getch();
}
