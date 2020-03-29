#include <stdio.h>
#include <conio.h>

char order(char arr[][5]);
int main()
{   char nm1[3][5];
    int x,y;
    
    for(x=0;x<3;x++)
    {
    printf("Enter A Name:(5 characters maximum)\n Enter here :");
    gets(nm1[x]);
    }
    
    order(nm1);
    
    printf("~after sorting~\n");
    for(x=0;x<3;x++)
    {for(y=0;y<5;y++)
        printf(" %c",nm1[x][y]);
        printf("\n");
    }
    getch();
    return 0;  
}
char order(char arr[][5])
{ int x,y,z; char temp[3][5];
         for(z=3;z>0;z--)
      {   for(x=0,y=0;x<z;x++)
            {  if (arr[x+1][y]==arr[x][y])
                {y++; x--;}
            else if(arr[x+1][y]<arr[x][y])
                {
                for(y=0;y<5;y++)
                    {temp[0][y]=arr[x][y];
                     arr[x][y]=arr[x+1][y];
                     arr[x+1][y]=temp[0][y];
                    }
                }      
            }      
      }
}

