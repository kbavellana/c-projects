#include <stdio.h>
#include <conio.h>

int main()
{   char nm[80];
    int hw;
    float gp,np,hpr;
    
    printf("Worker's name : ");
    gets(nm);
    printf("\n\n Hours work : ");
    scanf("%d",&hw);
    printf("\n\n Hourly pay rate : ");
    scanf("%f",&hpr);
    gp=hw*hpr;
    if(gp<=300.00)
        np=gp-(gp*.1);
    else if (gp>300.00)
        np=gp-(gp*.12);
        
        printf("\n\n %s ,your net pay is %.2f",nm,np);

    
    getch();
    return 0;
}
