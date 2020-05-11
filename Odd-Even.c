#include <stdio.h>
#include <conio.h>

int main(void)
{
	char nm[80];
	int n,r;
	
	printf("\n Enter your name: ");
	gets(nm);
	printf("\n \n  Enter a number : ");
	scanf("%d",&n);
	r=n%2;
	if (r==0)
		{
			printf(" \n %s, the number is an Even number. =)",nm);
		}
	else if (r!=0)
		{
			printf(" \n %s, the number is An Odd number. =)",nm);
		}
	else
		printf("\n Error. Invalid number. Check again.");

getch();		
}
