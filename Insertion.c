#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{   char nm[80],resp;
    int s,tot_elem, elements[10], i, n, temp;
    
    printf("\n\n Name : ");
    gets(nm);
    do{
    printf("Enter Total integer you want to order.\n Minimum -> 5 | Maximum ->10 \n Response : ");
    scanf("%d",&tot_elem);
        if(tot_elem<5 || tot_elem>10)
            printf("Error. [Min.: 5 | Max.:10 ]");
      }while(tot_elem<5 || tot_elem>10);
    
    do{
    printf("Ascending/Descending [a/d] : ");
    scanf(" %c",&resp);
        if(resp!='a' && resp!='A' && resp!='d' && resp!='D')
            printf("\nError. 'a' or 'd'.\n");
      }while(resp!='a' && resp!='A' && resp!='d' && resp!='D');
    
    for(i=0,n=1;i<tot_elem;i++,n++)
    {   printf("Enter element no. %d : ",n);
        scanf("%d",&elements[i]);
    }
    
    for(n=1;n<=tot_elem;n++)
    {   temp=elements[n];
        i=n-1;
        while(temp<elements[i])
        {   elements[i + 1]=elements[i];
            i--;
        }            
        elements[i+1]=temp;
    }  
    
    printf("\n\n\n After final sorting:");
         
    if(resp=='a' || resp=='A')
    {
    for(i=0;i<tot_elem;i++)
        printf("%d ",elements[i]);
    }
    
    else if(resp=='d' || resp=='D')
    {
    for(i=tot_elem-1;i>=0;i--)
        printf("%d ",elements[i]);
    }
    
    getch();
    return 0;
}
