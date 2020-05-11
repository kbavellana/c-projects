#include <stdio.h>
#include <conio.h>
#define A 35
#define B 45
#define C 56
#define D 57.5
int main()
{
    char nm[80];	int NCA,NCB,NCC,NCD,TCA,TCB,TCC,AB;	float TCD,Total;
	printf("Customer's name : ");
	gets(nm);
	printf("\n THE CANDY STORE... ONLINE! \n \n");
	printf("The Price of our Candies: \n \n");
	printf("\n Candy A is 35.00 pesos. \n ");
	printf("Candy B is 45.00 pesos. \n ");
	printf("Candy C is 56.00 pesos. \n ");
	printf("Candy D is 57.50 pesos. \n ");
	printf("========================================");
	printf("\n \n How many bags of Candy A will you order? : " );
	scanf("%d",&NCA);
	TCA=NCA*A;
	printf("\n How many bags of Candy B will you order? : " );
	scanf("%d",&NCB);
	TCB=NCB*B;
	printf("\n How many bags of Candy C will you order? : " );
	scanf("%d",&NCC);
	TCC=NCC*C;
	printf("\n How many bags of Candy D will you order? : " );
	scanf("%d",&NCD);
	TCD=NCD*D;
	Total=TCA+TCB+TCC+TCD;
	AB=NCA+NCB+NCC+NCD;
	printf("\n \n %s, Here's is the Summary of your Order. \n \n ",nm);
	printf("\n \n Total number of Bags: %d",AB );
	printf("\n \n TOTAL AMOUNT: %.2f pesos",Total );
	getch();
}

