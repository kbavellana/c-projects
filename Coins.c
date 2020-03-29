#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    char nm[80]; int fice,twce,onpe,fipe,tepe,tot_coi;
    float tfice,ttwce,tonpe,tfipe,ttepe;
    float total;
    
    printf("\n Name of yours : ");
    gets(nm);
    printf("Enter your coins : ");
    printf("\n\n\t 5 cent/s : ");
    scanf("%d",&fice);
    tfice=fice*.05;
    printf("\n\n\t 25 cent/s : ");
    scanf("%d",&twce);
    ttwce=twce*.1;
    printf("\n\n\t 1 Peso/s : ");
    scanf("%d",&onpe);
    tonpe=onpe*1;
    printf("\n\n\t 5 peso/s : ");
    scanf("%d",&fipe);
    tfipe=fipe*5;
    printf("\n\n\t 10 peso/s : ");
    scanf("%d",&tepe);
    ttepe=tepe*10;
    
    total=tfice+ttwce+tonpe+tfipe+ttepe;
    tot_coi=fice+twce+onpe+fipe+tepe;
    printf("\n\n your %d coins is %.2f =).",tot_coi,total);
    
    
    getch();
    return 0;
}
