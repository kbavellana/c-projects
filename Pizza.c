#include<stdio.h>
#include<conio.h>
int main()
{
    char nm[80];
    int slc, wp, exs, eq;
    float ta;
    
    printf("\n \n The Iza's Pizza!");
    printf("\n \n Enter customer's name: ");
    gets(nm);
    printf("\n \n %s, How Many Slice/s will you order? : ",nm);
    scanf("%d",&slc);
    printf("\n \n Number of Slice/s ordered: %d",slc);
    wp=slc/8;
    exs=slc%8;
    printf("\n \n That is equal to %d whole pizza and %d slice/s.",wp,exs);
    ta=(wp*200)+(exs*25)+(exs*2.5);
    printf("\n \n %s, Please pay the total amount of %.2f",nm,ta);
    printf("\n \n Thank you, %s, Enjoy your pizza.",nm);
    getch();
}
