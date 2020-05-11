#include <stdio.h>
#include <conio.h>

int main(void)
{
	int slry,hour,ot,a;
	char nm[80];
	printf("\n Hi, What's your name? : ");
	gets(nm);
	printf("\n Enter your number of hours of work this week: ");
	scanf("%d", &hour);
		if ((hour<=40) && (hour>0))
			{
				slry=hour*60;
				printf("\n Your wage is : %d.",slry);
			}
		else if ((hour>40)&&(hour<=144))
		{
		//gawing 750 ang 1.5
		
			ot=hour-40;
			a=(ot*60)*1.5;
			slry=a+(40*60);
			
			printf("\n Your ovetime :%d hours",ot);
			printf("\n Your overtime pay:%d",a);
			printf("\n \n Your wage is : %d. =)",slry);
		}
			
		else 
			printf("\n Did you work?");
getch();
}
