#include <stdio.h>
#include <conio.h>


struct vento
{
    char product[80];   
    float price;   
    int qty; 
    char qtype[10];
} ss[20];

int main(void)
{
    FILE *tot, *pot;
    
    tot = fopen("inventory.txt","a");
    pot = fopen("inventory.txt","r");
    fscanf("");
    fprintf(tot, " ");
    fclose(tot);
    
    
    
    
    getch();
    
}
