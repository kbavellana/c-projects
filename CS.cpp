 #include <stdio.h>
#include <conio.h>
#include <windows.h>
void job_input(void); void ave(void); void reset(void);
void FCFS(void); void SJF(void); void NPP(void); void PP(void); void SRTF(void); void RR(void);
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

// main variables
		int algo_choose,ctr=0;char prev_val;
//fcfs,sjf,npp,some pp variables
	int jobb,last_arrival,s_Total_burst,small_burst,f_job=0,many=0,storage[10],Time_start,Time_finish,idle=0;
	int i,j=0,k,x,y,temp,pass; float TAve,WAve,Total_burst,timeline;
//pp variables
	
//round robin variables
	float time_slice=0;
	
	
int main()
{														maine: 
	system("cls"); printf("counter:%d",ctr);
	printf("\tChoose from below: \n \t1. First Come First Serve\n \t2. Shortest Job First\n \t3. Non-Preemptive Priority ");
	printf("\n\t4. Preemptive Priority\n \t5. Shortest Remaining Time First \n\t6. Round Robin \n\n\t0. Exit \n\n\t Response:");
	scanf("%d",&algo_choose);

	switch(algo_choose)
	{
		case 1: printf("\n\t\tFirst Come First Serve"); FCFS(); break;
		case 2: printf("\n\t\tShortest Job First"); SJF();break;
		case 3: printf("\n\t\tNon-Preemptive Priority"); NPP();break;
		case 4: printf("\n\t\tPreemptive Priority "); PP(); break;
		case 5: printf("\n\t\tShortest Remaining Time First"); SRTF();break;
		case 6: printf("\n\t\tRound Robin"); RR();break;
		case 0: printf("Thank you! =>"); goto end;break;
		default: printf("eww. No Algorithm detected. Choose another."); goto maine; break;
	}
	goto maine;
	
	end:
	getch();
	return 0;
}

void job_input()
{
	printf("\n\tHow Many jobs? : ");
	scanf("%d",&jobb);

	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
	
		printf("\tBurst:");
		scanf("%f",&job[i].Burst);
		
		Total_burst+=job[i].Burst;
		s_Total_burst=Total_burst;
		job[i].temp_burst=job[i].Burst;
		job[i].skip=false;
		job[i].swits=true;
		job[i].round=0;
		switch(algo_choose)
		{
			case 3:
			case 4: printf("\tPriority no.: ");
					scanf("%d",&job[i].priority);
					break;
			case 6: printf("Time Slice: ");
					scanf("%f",&time_slice);
					break;
			default: break;
		}
}
}

void process(int p)
{
	switch(algo_choose)
	{
		case 1:
		case 2:
		case 3:Time_start  = Time_finish;
				timeline   += job[p].Burst;
				Time_finish = timeline;
				job[p].TurnAround = Time_finish - job[p].Arrival;
					TAve += job[p].TurnAround;
				job[p].Waiting    = Time_start  - job[p].Arrival;
					WAve += job[p].Waiting;
				job[p].skip=true;
			
			break;
		default: break;
	}
				
}

void ave(void)
{	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	for(i=0;i<jobb;i++)
	{
		printf("\n\tJob#%d : TT:%.2f  WT:%.2f",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	getch();
	
}

void FCFS(void)
{	job_input();
		while(timeline!=Total_burst)
	{
	
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
				for(i=0;i<jobb;i++)
				{
					if(job[i].Arrival==storage[0])
					{
						process(i);
					}
				 } 

	
		}
		
		printf("\nweh");				
	}
	ave();
	getch();
}

void SJF(void)
{	job_input();
	while(timeline!=Total_burst)
	{
	
	//search for the NEXT! job to be put in the process
	
		//search for jobs that arrive when the preceding job is in the process
				j=0;
				for(i=0;i<jobb;i++)//job
				{
					if((job[i].Arrival <= timeline) && (job[i].skip==false))
						{
							storage[j]=job[i].Burst;
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
				for(i=0;i<jobb;i++)
				{
					if(job[i].Burst==storage[0])
					{
						process(i);
					}
				 } 

	
		}
		
		printf("\nweh");				
	}
	ave();
	
	getch();
	
}

void NPP(void)
{	job_input();
	
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
				for(i=0;i<jobb;i++)
				{
					if(job[i].priority==storage[0])
					{
						process(i);
					}
				 } 
	
		}
			
	
	}
	ave();
	
	getch();
	
}

void PP(void)
{	int p;
	int jobb,last_arrival,timeline=0,storage[10],Time_start,Time_finish;
	int i,j=0,k,x,y,temp,prev_j=0; float TAve,WAve,Total_burst;
	
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
		
		printf("\tPriority no.: ");
		scanf("%d",&job[i].priority);
		job[i].swits=true;
	}
		
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
					{	p=i;
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
}//end of pp

void SRTF(void)
{
	
}

void RR(void)
{
	
}

void reset(void)
{		timeline=0;
		TAve=0;
		WAve=0;
		Time_finish=0;
		Total_burst=s_Total_burst;
	for(i=0;i<jobb;i++)
	{
		job[i].skip=false;
		job[i].swits=true;
	}
}








