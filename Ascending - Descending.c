#include<stdio.h>
#include<conio.h>
int main()
{   char nm[80],res,ress;
    float I,D,T;
    
    printf("\n \n Name : ");
    gets(nm);
        do{
            printf("\n \n Enter 1st integer : ");
            scanf("%f",&I);
            printf("\n \n Enter 2nd integer : ");
            scanf("%f",&D);
            printf("\n \n Enter 3rd integer : ");
            scanf("%f",&T);
            printf("\n \n Ascendng or Descending?(a/d) : ");
            scanf(" %c",&res);
            switch (res)
            {printf("\n \n %s, here it is. \n ",nm);
                case 'a': case'A':
                {
                         if ((I<D && D<T) || (I==D && D==T) || (I==D && I<T))
                        printf("\n \n \t %.2f---%.2f---%.2f",I,D,T);
                    else if ((I<T && T<D) || (T==D && I<T))
                        printf("\n \n \t %.2f---%.2f---%.2f",I,T,D);
                    else if  (D<I && I<T)
                        printf("\n \n \t %.2f---%.2f---%.2f",D,I,T);
                    else if ((D<T && T<I) || (D==T && D<I) || (T==I && D<T))
                        printf("\n \n \t %.2f---%.2f---%.2f",D,T,I);
                    else if ((T<I && I<D) || (T==I && T<D) || (I==D && T<I))
                        printf("\n \n \t %.2f---%.2f---%.2f",T,I,D);
                    else if (T<D && D<I) 
                        printf("\n \n \t %.2f---%.2f---%.2f",T,D,I);
                    else
                        printf("\n \n Error 414."); break;
                }
                case 'd': case 'D':
                {
                         if ((I>D && D>T) || (I==D && D==T) || (I==D && I>T))
                        printf("\n \n \t %.2f---%.2f---%.2f",I,D,T);
                    else if ((I>T && T>D) || (T==D && I>T))
                        printf("\n \n \t %.2f---%.2f---%.2f",I,T,D);
                    else if  (D>I && I>T)
                        printf("\n \n \t %.2f---%.2f---%.2f",D,I,T);
                    else if ((D>T && T>I) || (D==T && D>I) || (T==I && D>T))
                        printf("\n \n \t %.2f---%.2f---%.2f",D,T,I);
                    else if ((T>I && I>D) || (T==I && T>D) || (I==D && T>I))
                        printf("\n \n \t %.2f---%.2f---%.2f",T,I,D);
                    else if (T>D && D>I) 
                        printf("\n \n \t %.2f---%.2f---%.2f",T,D,I);
                    else
                        printf("\n \n Error 424."); break;
                }
                
                default:printf("\n \n Error 434.");break;
            }
            printf("\n ***************************************");
            printf("\n \n press 'y' for another, and any other key to exit. \n Response : ");
            scanf(" %c",&ress);
    }
    while(ress=='y' || ress=='Y');
    printf("\n %s, Thank you for using my program. ^_^",nm);
    getch();
}
