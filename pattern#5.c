#include <stdio.h>
int main()
{    int w,x,y,z=1;
    
     for(x=1;x<=3;x++)
     {   for(w=z;w<3;w++)
           printf(" ");
        
        for(y=1;y<=x;y++)
        {   printf("* ");
            z++;        }
        printf("\n\n");
    }
    getch();
}
