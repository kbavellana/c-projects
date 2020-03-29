#include <stdio.h>
#include <stdlib.h>


int main() 
{
  int Numero[10],searchNum,count=0,counter;

     printf("Enter 10 numbers \n");
     for (counter=0;counter<10;counter++)
     {  printf("Enter a number:");
        scanf("%d",&Numero[counter]); 
      }
        printf("\n\nEnter search number: \n\n");
        scanf("%d",&searchNum);
        
       for (counter=0;counter<10;counter++) 
       {    if(searchNum==Numero[counter])
	        count++;	   
	   }
        printf("\nThere are %d number/s present.",count);
        printf("\nThese numbers are located in number/s :\n ");
		for (counter=0;counter<10; counter++) 
        {
			if (searchNum==Numero[counter]) 
				printf("%d ",counter);
		}
        
getch();        
return 0;
}
    
   
    
    

