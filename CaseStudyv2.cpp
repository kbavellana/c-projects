#include <stdio.h>
#include <conio.h>

struct Jobs_desc
{
	bool skip;
	bool earliest;
	int Arrival;
	int Burst;
	int TurnAround;
	int Waiting;
	int priority;
} job[10];

/*
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
	
*/

int main()
{
	 int timeline=0,Time_start,Time_finish=0,jobb=0,Total_burst,last_arrive=0,idle=0,small_burst=0,storage[10];
	 int i,j,k,l,x,y,temp;
	 float TAve, WAve; bool first=false;
	

	printf("How Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
			if(job[i].Arrival >= last_arrive)
				last_arrive=job[i].Arrival;
			if(i==0)
				job[i].earliest=true;
				
		printf("\tBurst:");
		scanf("%d",&job[i].Burst);
		Total_burst+=job[i].Burst;
			if(i==0)
				small_burst = job[i].Burst;
			else
				{
					if (small_burst > job[i].Burst)
						small_burst = job[i].Burst;
				}
		job[i].skip==false;	
		 if((job[i].Arrival < job[i-1].Arrival) || ( (job[i].Arrival == job[i-1].Arrival) && (job[i].Burst < job[i-1].Burst) ) )
					{
						job[i-1].earliest=false;
						job[i].earliest=true;
					}	
			
			
		
	}
	printf("way");
	printf("");
	//based on shortest burst
	for(i=0;i<=last_arrive;i++)//arrival checking
	{idle=0;
		for(j=0;j<jobb;j++)//checking jobs
		{
			if((job[j].earliest=true) && (job[j].skip==false))
			{
				Time_start  = Time_finish;
				timeline   += job[j].Burst;
				Time_finish = timeline;
				job[j].TurnAround = Time_finish - job[j].Arrival;
					TAve += job[j].TurnAround;
				job[j].Waiting    = Time_start  - job[j].Arrival;
					WAve += job[j].Waiting;
				printf("\n\tjob#%d TT: %d\tWT: %d",j+1,job[j].TurnAround,job[j].Waiting); getch();
				job[j].skip=true;
			}
			else 
			{	printf("way2");
			
				//placing burst;
				for(l=0;l<jobb;l++)
				{
					for(k=0;k<jobb;k++)
					{
						if((job[k].skip==false) && (job[k].Arrival<timeline))
						storage[l] = job[k].Burst;
						break;
					}
					
				}
				
				//sorting
				for(x=0;x<=jobb;x++)
				{
					for(y=(x+1);y<jobb;y++)
					{
						if (storage[x] > storage[y])
						{
							temp = storage[x];
							storage[x] = storage [y];
							storage[y] = temp;
						}
					}
					printf("n");
				}
				small_burst=storage[0];
				
				if((job[j].Burst==small_burst) && (job[j].skip==false))//comparing burst
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
					
				else if((job[j].Arrival!=i) && (job[j].skip==false) && (job[j].Arrival>timeline))//if there's a gap
					idle++;
			}
			
				
			
		}
		if(idle!=0)
		timeline++;
	}
	goto end;
	end:
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
	
	
	getch();
	return 0;
}


