#include <stdio.h>
#include <conio.h>
float boyd(float wrkr[][4]);
int main()
{
    
    float giv[4][4];
    int m,j;
    //input data
    for(m=0;m<3;m++)
    {for(j=0;j<3;j++)
      {printf(" %d|%d : Enter a number :",m,j);
       scanf("%f",&giv[m][j]);
      }
    }
    boyd(giv);
    
    
    getch();
    return 0;
}
float boyd(float wrkr[][4])
{int m,j; float sum1=0, sum2=0;
//sums for m
    for(m=0;m<3;m++)
    {for(sum1=0,j=0;j<3;j++)
      {sum1+=wrkr[m][j]; }

     printf("\n%d|%d: %.2f",m,j,sum1); 
     wrkr[m][j]=sum1;
     if (sum2<sum1)
         sum2=sum1;
    }
    //for j
    for(j=0;j<3;j++)
    {for(sum1=0,m=0;m<3;m++)
     {sum1+=wrkr[m][j];  }
     printf("\n%d|%d :  %.2f",m,j,sum1); 
     wrkr[m][j]=sum1;
     if (sum2<sum1)
         sum2=sum1;
    }
    printf("\n The largest total is %.2f ",sum2);
}
