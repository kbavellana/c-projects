#include <stdio.h>
#include <conio.h>

int main()
{   char nm[80]; int gun;
    float a,b,bullet;
    
    printf("Name : ");
    gets(nm);
    printf("\n\n A : ");
    scanf("%f",&a);
    printf("\n\n B :");
    scanf("%f",&b);
    printf("Type of Gun : ");
    scanf("%d",&gun);
    
    if(gun==0)
        bullet=a*b;
    else if(gun==1)
        bullet=a/b;
    else
        bullet=a+b;
    printf("\n\n The bullet is : %.2f",bullet);
    
    getch();
    return 0;
}
