#include <stdio.h>
#include <conio.h>
int main()
{   int z,x,y,w;
    
    printf("\tEnter number : ");
    scanf("%d",&z);
    for(y=0,x=1;z>0;z--)
    {printf("%d ",x);
      x=x+y;  y=x;
    }
    
    getch();
    return 0;
}
