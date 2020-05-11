#include <stdio.h>
#include <conio.h>

int main()
{
	char name[80];
	int given,sec,min,hou,secs,mins,hous;
	
	printf("\n \n Hi, What's your name? : ");
	scanf("%s",name);
	printf(" \n \n Input you seconds : ");
	scanf("%d",&given);
	
	hous=given/3600;
	mins=(given%3600)/60;
	secs=(given%3600)%60;
	printf(" \n Second/s  : %d ",secs);
	printf("\n Minute/s  : %d ",mins);
	printf("\n Hour/s    : %d ",hous);
	printf("\n \n %s, the time is %d:%d:%d :)",name,hous,mins,secs);
	getch();
	
	
}
