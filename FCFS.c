#include <stdio.h>
#include <conio.h>

struct Jobs_desc
{
	bool skip;
	int Arrival;
	int Burst;
	int TurnAround;
	int Waiting;
} job[10];


int main()
{ int timeline=0,Time_start,Time_finish=0,jobb,i,j,Total_burst,last_arrive=0,idle=0;
	float TAve, WAve;
	

	printf("How Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
			if(job[i].Arrival >= last_arrive)
				last_arrive=job[i].Arrival;
	
		printf("\tBurst:");
		scanf("%d",&job[i].Burst);
		Total_burst+=job[i].Burst;
		job[i].skip==false;
	}	
	
	for(i=0;i<=last_arrive;i++)//arrival checking
	{idle=0;
		for(j=0;j<jobb;j++)//checking jobs
		{
			if((job[j].Arrival==i) && (job[j].skip==false))//comparing arrival to i
			{
				Time_start  = Time_finish;
				timeline   += job[j].Burst;
				Time_finish = timeline;
				job[j].TurnAround = Time_finish - job[j].Arrival;
					TAve += job[j].TurnAround;
				job[j].Waiting    = Time_start  - job[j].Arrival;
					WAve += job[j].Waiting;
				printf("\n\tjob#%d TT: %d\tWT: %d",j+1,job[j].TurnAround,job[j].Waiting); getch();
				job[j].skip==true;
			}
			else if((job[j].Arrival!=i) && (job[j].skip==false) && (job[j].Arrival>timeline))
				idle++;
				
			
		}
		if(idle!=0)
		timeline++;
	}
	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
		getch();
		return 0;
}
	







