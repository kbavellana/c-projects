#include <stdio.h>
#include <conio.h>

void process(int p);
struct Jobs_desc
{
	bool skip;
	int Arrival;
	int Burst;
	int TurnAround;
	int Waiting;
	int priority;
} job[10];

int jobb,last_arrival,Total_burst,small_burst,f_job=0,many=0,timeline=0,storage[10],Time_start,Time_finish,idle=0;
	int i,j,k,x,y,temp,pass; float TAve,WAve;
	
int main()
{ 
	
	do{timeline=0;Total_burst=0;
	
	
	printf("\nHow Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
	
		printf("\tBurst:");
		scanf("%d",&job[i].Burst);
		Total_burst+=job[i].Burst;
		job[i].skip=false;
	}	

	
	printf("\nTotal Burst: %d",Total_burst);
	while(timeline!=Total_burst)
	{
	printf("\ntimeline:%d",timeline); 
	//search for the NEXT! job to be put in the process
	
		//search for jobs that arrive when the preceding job is in the process
				j=0;
				for(i=0;i<jobb;i++)//job
				{
					if((job[i].Arrival <= timeline) && (job[i].skip==false))
						{
							storage[j]=job[i].Arrival;
							j++;
						}
				}
		if(j==0)
		{
			timeline++; 
			printf("\ntimeline:%d",timeline); 
			Time_finish=timeline; 
			Total_burst++;
		}
		//sorting what job is the next in line.
		else if(j!=0)
		{
			for(x=0;x<j;x++)
				{
					for(y=x+1;y<j;y++)
					{
						if (storage[x] > storage[y])
						{
							temp = storage[x];
							storage[x] = storage [y];
							storage[y] = temp;
						}
					}
				}
				for(i=0;i<jobb;i++)
				{
					if(job[i].Arrival==storage[0])
					{
						process(i);
					}
				 } 

	
		}
		
		printf("\nweh"); getch();				
	}
	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	for(i=0;i<jobb;i++)
	{
		printf("\n\tJob#%d : TT:%d  WT:%d",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
		getch();
		
	}while(job!=0);
	
		return 0;
}

void process(int p)
{
				Time_start  = Time_finish;
				timeline   += job[p].Burst;
				Time_finish = timeline;
				job[p].TurnAround = Time_finish - job[p].Arrival;
					TAve += job[p].TurnAround;
				job[p].Waiting    = Time_start  - job[p].Arrival;
					WAve += job[p].Waiting;
				job[p].skip=true;
}


