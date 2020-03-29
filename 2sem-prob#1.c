#include <stdio.h>
#include <conio.h>
int funk(int tbl[][4],int rw);
int main()
{ int T1[2][4],T2[3][4],   w,x,y,z, sm1,sm2,tsm;

    printf("Enter 8 numbers:");
    for(w=0;w<2;w++)
    {for(x=0;x<4;x++)
        scanf("%d",&T1[w][x]);  
    }
    sm1=funk(T1,w);
    printf("\n================================\n");
    
    printf("Enter 12 numbers:");
    for(w=0;w<3;w++)
    {for(x=0;x<4;x++)
        {
            scanf("%d",&T2[w][x]);
        }
    }
    sm2=funk(T2,w);
    tsm=sm1+sm2;
    
    printf("The Sum Of Table 1: %d \n The Sum Of Table 2: %d \n The Sum Of those two : %d",sm1,sm2,tsm);
    
    getch();
    return 0;
}
int funk(int tbl[][4],int rw)
{int temp_sum=0,y,z;

    for(y=0;y<rw;y++)
    {for(z=0;z<4;z++)
        temp_sum+=tbl[y][z];
    }
    return temp_sum;
    
}
