#include <stdio.h>
int main()
{
    int x,y;
    
    for(x=3;x>=1;x--)
    {
        for(y=1;y<=x;y++)
            printf("%d ",y);
        printf("\n\n");
    }
    getch();
}
