#include<stdio.h>
#include<conio.h>
int main()
{
    char cn[80];
    int bt, nn, rn;
    float tc,tn, tp,arn;
    
    printf("\007 \n \n 'Dyaryo ng Bayan'");
    printf("\007 \n \n Enter Customer's name : ");
    gets(cn);
    printf("\007 \n Number of newspapers bought by %s \n 1 newspaper = 7 pesos : ",cn);
    scanf("%d",&bt);
    tc=bt*7;
    printf("\007 \n \n Total cost of newspaper bought is: P %.2f. ",tc);
    printf("\007 \n \n Number of newspapers sold by %s \n 1 newspaper=10 pesos : ",cn);
    scanf("%d",&nn);
    if (nn<=bt)
        {
        tn=nn*10;
        printf("\007 \n \n Total amount of newspaper sold is P%.2f.",tn);
        rn=bt-nn;
        printf("\007 \n \n The number of newspaper returned is %d.",rn);
        arn=rn*2;
        tp=(tn+arn)-tc;
        printf("\007 \n \n %s, The total profit for the day is P%.2f. ",cn,tp);
        }
        
    else if (bt<nn)
        {printf("\n \n Error, %s, you sold much greater number of newspaper than you can. \n Are you kidding me?!! \n \t\t\t get out of here!!!! -_-",cn);}
    getch();
}
