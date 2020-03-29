#include<conio.h>
#include<stdio.h>
#define queue 10
void process(int p);
struct Jobs_desc
{
	bool skip;
	int Arrival;
	float Burst;
	float TurnAround;
	float Waiting;
	int priority;
	float time_out;
	float temp_burst;
	bool swits;
	int round;
	float deduction;
} job[10];

int jobb,last_arrival,Total_burst,storage[10];
	int i,j=0,k=1,x,y,d,temp,pass,prev_j=0; float TAve,WAve,time_slice=0,timeline=0,Time_start,Time_finish;
	

int main()
{
	printf("How Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
	
		printf("\tBurst:");
		scanf("%f",&job[i].Burst);
		
		Total_burst+=job[i].Burst;
		job[i].temp_burst=job[i].Burst;
		job[i].skip=false;
		job[i].swits=true;
		job[i].round=0;
	}
		printf("Time Slice: ");
		scanf("%f",&time_slice);
		
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
							storage[j]=job[i].time_out;
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
					if(job[i].time_out==storage[0])
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
	return 0;
}

void process(int p)
{				//guard: are you the previous one?
				if(p != prev_j)
				{
							job[prev_j].deduction+=(Time_finish-Time_start);
							job[prev_j].swits=true;
				}
				printf("\njob#%d ang nasa process",p+1);	
				if(job[p].swits==true)
				{
					Time_start  = timeline; job[p].swits=false;
				}
				
				if(job[p].temp_burst>time_slice)
				{
					timeline+=time_slice;   job[p].temp_burst-=time_slice;
				}
				else if (job[p].temp_burst<=time_slice)
				{
					timeline+=job[p].temp_burst; job[p].temp_burst-=job[p].temp_burst;
				}

				Time_finish = timeline;
				job[p].time_out=timeline;
					printf("\ntime finish:%.2f",Time_finish);
				if(job[p].temp_burst==0)
					{ 
					job[p].skip=true;
					job[p].TurnAround = Time_finish - job[p].Arrival;
					TAve += job[p].TurnAround;
					job[p].Waiting    = (Time_start  - job[p].Arrival) - job[p].deduction;
					WAve += job[p].Waiting; printf("\nloob ng hulinf if sa process"); getch();
					}
					prev_j=p;
				job[p].round++;
				printf("\ntemp_burst:%.2f",job[p].temp_burst);
}



