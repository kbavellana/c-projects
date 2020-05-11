#include <stdio.h>
#include <conio.h>
int main()
{   int w,x,y,z=1;
    
    for(x=1;x<=3;x++)
    {   for(w=z;w<3;w++)
           printf(" ");
        
        for(y=1;y<=x;y++)
           printf("* ");
            z++;        
        printf("\n\n");
    }

w=1;
    for(x=2;x>=1;x--)
    {
        for(z=1;z<=w;z++)
            printf(" ");

        for(y=x;y>=1;y--)
        {printf("* ");}
        w++;
        printf("\n\n");
    }
    
    getch();
}
