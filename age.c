#include <stdio.h>
#include <conio.h>

int main()
{   char nm[80];
    int age;
    
    printf("\n\n Name : ");
    gets(nm);
    printf("\n\n Age : ");
    scanf("%d",&age);
    
    if(age>=0 && age<=12)
        printf("%s, you're a 'C' type of human.",nm);
    else if(age>=13 && age<=19)    
        printf("%s, you're a 'T' type of human.",nm);
    else if(age>=20)
        printf("%s, you're an 'A' type of human.",nm);
    
    getch();
    return 0;
}
