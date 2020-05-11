#include<stdio.h>
#include<conio.h>

int main()
{
	char name[80],gender;
	int by, cy, ipa, age;
	
	printf(" \n \n Hi, What's your name? : ");
	scanf("%s", &name);
	printf("\n \n User Name : %s",name);
	printf("\n \n     Gender: ");
	scanf(" %c", &gender);	
	printf("\n \n Birthyear: ");
	scanf("%d",&by);
	printf("\n \n Current year: ");
	scanf("%d",&cy);
	age=cy-by;
	if (gender=='m' || gender=='M')
		ipa=age/2+7;
	else if (gender=='f' || gender=='F')
		ipa=(age+7)*2;
	else
		{printf("\n \n Please input 'm' for male and 'f' for female.");}
	printf("\n \n %s, your ideal's partner age is %d.",name,ipa);
getch();
}
