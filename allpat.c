#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,w,z=1;
    
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=x;y++)
            printf("%d ",y);
        printf("\n\n");
    }
    getch();
    for(x=1;x<=3;x++)
    {
       for(y=3;y>=x;y--)
            printf("%d ",y);
       printf("\n\n");
    }
    getch();
    for(x=3;x>=1;x--)
    {
        for(y=1;y<=x;y++)
            printf("%d ",y);
        printf("\n\n");
    }
    getch();
    for(x=3;x>=1;x--)
    {
        for(y=3;y>=x;y--)
            printf("%d ",y);
        printf("\n\n");
    }
    getch();
    for(x=1;x<=3;x++)
    {   for(w=z;w<3;w++)
           printf(" ");
        
        for(y=1;y<=x;y++)
        {   printf("* ");
            z++;        }
        printf("\n\n");
    }
    getch();

    w=1;
    for(x=1;x<=3;x++)
    {   for(w=z;w<3;w++)
           printf(" ");
        
        for(y=1;y<=x;y++)
           {printf("* ");
            z++;        }
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
    for(x=3;x>=1;x--)
    {
        for(y=1;y<=x;y++)
            printf("%d ",x);
        printf("\n\n");
    }
    getch();
    for(x=1;x<=3;x++)
    {
        for(y=3;y>=x;y--)
            printf("%d ",x);
        printf("\n\n");
    }
    getch();
    return 0;
}
