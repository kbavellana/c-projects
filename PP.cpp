#include<conio.h>
#include<stdio.h>

void process(int p);
struct Jobs_desc
{
	bool skip;
	int Arrival;
	int Burst;
	int TurnAround;
	int Waiting;
	int priority;
	int deduction;
	int temp_burst;
	bool swits;
} job[10];

int jobb,last_arrival,Total_burst,timeline=0,storage[10],Time_start,Time_finish,temp_burst=0;
	int i,j=0,k,x,y,d,temp,pass,prev_j=0; float TAve,WAve;
	

int main()
{
	printf("How Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
	
		printf("\tBurst:");
		scanf("%d",&job[i].Burst);
		Total_burst+=job[i].Burst;
		job[i].skip=false;
		
		printf("\tPriority no.: ");
		scanf("%d",&job[i].priority);
		job[i].swits=true;
	}
		
	printf("\nTotal Burst: %d",Total_burst);
	
	while(timeline!=Total_burst)
	{
			//search for the NEXT! job to be put in the process
	
		//search for jobs that arrive when the preceding job is in the process

				j=0;
				for(i=0;i<jobb;i++)//job
				{
					if((job[i].Arrival <= timeline) && (job[i].skip==false))
						{
							storage[j]=job[i].priority;
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
		if(j!=0)
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
			//end of sorting		
			
				for(i=0;i<jobb;i++)
				{
					if(job[i].priority==storage[0])
					{	process(i);
						break;
					}
				 } 
	
		}
	}
	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	for(i=0;i<jobb;i++)
	{
		printf("\n\tJob#%d : TT:%d  WT:%d",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
	getch();
	return 0;
}



void process(int p)
{				//guard: are you the previous one?
				printf("\nguard_j: %d",prev_j);
				if(p != prev_j)
				{
							job[prev_j].deduction+=(Time_finish-Time_start);
							job[prev_j].swits=true;
				}
					
				if(job[p].swits==true)
				{
					Time_start  = timeline; job[p].swits=false;
				}
				
				timeline++;   job[p].temp_burst++;
				Time_finish = timeline;
					
				if(job[p].temp_burst==job[p].Burst)
					{
					job[p].skip=true;
					job[p].TurnAround = (Time_finish - job[p].Arrival);
					TAve += job[p].TurnAround;
					job[p].Waiting    = (Time_start  - job[p].Arrival) - job[p].deduction;
					WAve += job[p].Waiting;
					}
					prev_j=p;
}

