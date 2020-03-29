#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <strings.h>

struct varia
{
    char nm[80];   float price;   int qunty; char qtype[10];
} ss[20];

int main()
{ int menu_resp , i=0,j ; char uni_res;
do{uni_res=0;
do{system("cls");
            printf("\nMenu \n 1.)Inquiry \n 2.)Add \n 3.)Modify \n 4.)Exit \n Response:");
            scanf("%d",&menu_resp);
            
            if (menu_resp==1)
            { system("cls");
                printf("\n\t\t Inquiry");
                printf("\n\t\tTable of Items:");
                printf("\n Name \t Price \t Quantity \t Quantity type ");
                for(j=0;j<20;j++)
                {if(ss[j].price!=0.00)
                    printf("\n %s \t %.2f \t %d \t %s",ss[j].nm, ss[j].price, ss[j].qunty, ss[j].qtype); }
 
            }
            char two_res;
            if(menu_resp==2)
            {do{system("cls");
                i=0; while(ss[i].price!=0.00)
                i++;
                
                printf("\n\t\t Adding Items");
                printf("\n\tPlease provide necessary details:");
                printf("\nName of item: ");
                scanf("\n"); gets(ss[i].nm); 
                strupr(ss[i].nm);
                
                printf("\nPrice: ");
                scanf("%f",&ss[i].price);
                
                printf("\nQuantity: ");
                scanf("%d",&ss[i].qunty);
                
                printf("\nQuantity type [e.g. pad,piece/s, liter/s] : ");
                scanf("\n"); gets(ss[i].qtype); 
                
                printf("\n\nThank you! The Item has been added to the inventory! =)");
                
                printf("\n To add another item/s, press 'a'. press any other key to exit. \n Response:");
                scanf(" %c",&two_res);
                }while(two_res=='a' || two_res=='A');
            }
            
            int del_nm;
            char del_res,de_res;
            
            if(menu_resp==3)
            {do{
                for(j=0;j<20;j++)
                {if(ss[j].price!=0.00)
                    printf("%d.)\n %s \t %.2f \t %d \t %s",j+1,ss[j].nm, ss[j].price, ss[j].qunty, ss[j].qtype);
                }
            
            printf("from the list above, type the number of the item you want to be deleted. \n Name:");
            scanf("%d",&del_nm);
            printf("Are you sure you want to delete this item? %s",ss[del_nm-1].nm);
            printf("Response[y/n]: ");
            scanf(" %c",&del_res);
            if(del_res!='y' && del_res!='Y' && del_res!='n' && del_res!='N')
            {;}
            else if(del_res=='y' || del_res=='Y')
                {
                ss[del_nm-1].price=0.00;
                ss[del_nm-1].qunty=0;
                }
            else if(del_res=='n' || del_res=='N')
                {printf("press 'd' to return to deleting item or press any other key to exit. \n Response: ");
                scanf(" %c",&de_res);
                }
                
            }while(de_res=='d' || de_res=='D');
            }
            
            
            
            
            
    do{ printf("\n \n press 'r' to return to menu.\n Response : ");
                        scanf(" %c",&uni_res);
                    }while(uni_res!='r' && uni_res!='R');
                    
  }while(menu_resp>5 && menu_resp<1);
  }while(uni_res=='r' || uni_res=='R');
    getch();
    return 0;
}
