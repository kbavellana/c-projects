#include<conio.h>
#include<stdio.h>

void process(int p);
struct Jobs_desc
{
	bool skip;
	int Arrival;
	float Burst;
	float TurnAround;
	float Waiting;
	int priority;
	float deduction;
	float temp_burst;
	bool swits;
} job[10];

int jobb,timeline=0,storage[10],Time_start,Time_finish;
	int i,j=0,k,x,y,temp,prev_j=0; float TAve,WAve,Total_burst;
	

int main()
{
do{timeline=0; Time_start=0;Time_finish=0; Total_burst=0; TAve=0; WAve=0;
	printf("How Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
	
		printf("\tBurst:");
		scanf("%f",&job[i].Burst);
		Total_burst+=job[i].Burst;
		job[i].skip=false;
		job[i].temp_burst=0;
		
		printf("\tPriority no.: ");
		scanf("%d",&job[i].priority);
		job[i].swits=true;
		job[i].TurnAround=0;
		job[i].Waiting=0;
		job[i].deduction=0;
	}
		
	printf("\nTotal Burst: %d",Total_burst);
	
	while(timeline!=Total_burst)
	{getch();
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
			Total_burst++; getch();
			
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
		printf("\n\tJob#%d : TT:%.2f  WT:%.2f",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
	getch();
}while(jobb!=0);
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

