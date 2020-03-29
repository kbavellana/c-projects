#include <stdio.h>
#include <conio.h>
#include <windows.h>

void FCFS(void); void SJF(void); void NPP(void); void PP(void); void SRTF(void); void RR(void);

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
} job[30];
	
int main()
{	int algo_choose,m;
maine: 
	system("cls");
	printf("\tChoose from below: \n \t1. First Come First Serve\n \t2. Shortest Job First\n \t3. Non-Preemptive Priority ");
	printf("\n\t4. Preemptive Priority\n \t5. Shortest Remaining Time First \n\t6. Round Robin \n\n\t0. Exit \n\n\t Response:");
	scanf("%d",&algo_choose);

	switch(algo_choose)
	{
		case 1: printf("\n\t\tFirst Come First Serve\n"); FCFS(); break;
		case 2: printf("\n\t\tShortest Job First\n"); SJF();break;
		case 3: printf("\n\t\tNon-Preemptive Priority\n"); NPP();break;
		case 4: printf("\n\t\tPreemptive Priority\n "); PP();break;
		case 5: printf("\n\t\tShortest Remaining Time First\n"); SRTF();break;
		case 6: printf("\n\t\tRound Robin\n"); RR();break;
		case 0: printf("Thank you! =>"); goto end;break;
		default: printf("eww. No Algorithm detected. Choose another."); getch();goto maine; break;
	}
	
	goto maine;
	
	end:
	getch();
	return 0;
}



void FCFS(void) 
{	int jobb=0,Total_burst=0,timeline=0,storage[10],Time_start=0,Time_finish=0;
	int i,j,k,x,y,p,temp,pass; float TAve=0,WAve=0;
	

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
						p=i;
						Time_start  = Time_finish;
						timeline   += job[p].Burst;
						Time_finish = timeline;
						job[p].TurnAround = Time_finish - job[p].Arrival;
							TAve += job[p].TurnAround;
						job[p].Waiting    = Time_start  - job[p].Arrival;
							WAve += job[p].Waiting;
						job[p].skip=true;
					}
				 } 

	
		}
		
		printf("\nweh");				
	}
	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	for(i=0;i<jobb;i++)
	{
		printf("\n\tJob#%d : TT:%.2f  WT:%.2f",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
		getch();
	
}

void SJF(void)
{	int jobb=0,Total_burst=0,timeline=0,Time_start=0,Time_finish=0;
	int i,j,k,x,y,p,temp,pass; float TAve=0,WAve=0,storage[10];
	
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
					if(job[i].Burst==storage[0])
					{
						p=i;
						Time_start  = Time_finish;
						timeline   += job[p].Burst;
						Time_finish = timeline;
						job[p].TurnAround = Time_finish - job[p].Arrival;
							TAve += job[p].TurnAround;
						job[p].Waiting    = Time_start  - job[p].Arrival;
							WAve += job[p].Waiting;
						job[p].skip=true;
					}
				 } 

	
		}
		
		printf("\nweh");				
	}
	
	TAve = TAve / jobb;
	WAve = WAve / jobb;
	for(i=0;i<jobb;i++)
	{
		printf("\n\tJob#%d : TT:%.2f  WT:%.2f",i+1,job[i].TurnAround,job[i].Waiting);
	}
	printf("\n\n\tTurnAround Time Average: %.2f \n\t Waiting Time Average: %.2f",TAve, WAve);
	
	getch();
	
}

void NPP(void)
{	int jobb=0,Total_burst=0,timeline=0,storage[10],Time_start=0,Time_finish=0;
	int i,j,k,x,y,temp,pass,p; float TAve,WAve;
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
					if(job[i].priority==storage[0])
					{
						p=i;
						Time_start  = Time_finish;
						timeline   += job[p].Burst;
						Time_finish = timeline;
						job[p].TurnAround = Time_finish - job[p].Arrival;
							TAve += job[p].TurnAround;
						job[p].Waiting    = Time_start  - job[p].Arrival;
							WAve += job[p].Waiting;
						job[p].skip=true;
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
}

void PP(void)
{	int jobb,timeline=0,storage[10],Time_start,Time_finish;
	int i,j=0,k,x,y,p,ctr=0,temp,prev_j=0; float TAve,WAve,Total_burst;
	
	
	timeline=0; Time_start=0;Time_finish=0; Total_burst=0; TAve=0; WAve=0;
	
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
		
	printf("\nTotal Burst: %.2f",Total_burst);
	
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
			//end of sorting		
			
				for(i=0;i<jobb;i++)
				{
					if(job[i].priority==storage[0])
					{	p=i;
						if((p != prev_j) && (ctr==1))
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
							prev_j=p; ctr=1;
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
	
}

void SRTF(void)
{int jobb,last_arrival,Total_burst=0,timeline=0,Time_start=0,Time_finish=0,temp_burst=0;
	int i,j=0,k,x,y,d,p,temp,pass,prev_j=0,ctr=0; float storage[10],TAve,WAve;
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
		job[i].TurnAround=0;
		job[i].Waiting=0;
		job[i].deduction=0;
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
							storage[j]=job[i].temp_burst;
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
					if(job[i].temp_burst==storage[0])
					{	p=i;
						if((p != prev_j) && (ctr==1))
						{
									job[prev_j].deduction+=(Time_finish-Time_start);
									job[prev_j].swits=true;
						}
							
						if(job[p].swits==true)
						{
							Time_start  = timeline; job[p].swits=false;
						}
						
						timeline++;   job[p].temp_burst--;
						Time_finish = timeline;
							
						if(job[p].temp_burst==0)
							{
							job[p].skip=true;
							job[p].TurnAround = (Time_finish - job[p].Arrival);
							TAve += job[p].TurnAround;
							job[p].Waiting    = (Time_start  - job[p].Arrival) - job[p].deduction;
							WAve += job[p].Waiting;
							}
							prev_j=p; ctr=1;
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
	
}

void RR(void)
{int jobb=0,Total_burst=0,ctr=0;
	int i,j=0,k=1,x,y,d,p,temp,pass,prev_j=0; float TAve=0,WAve=0,time_slice=0,timeline=0,Time_start=0,Time_finish=0,storage[10];
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
		job[i].TurnAround=0;
		job[i].Waiting=0;
		job[i].deduction=0;
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
		//end of sorting		
			
				for(i=0;i<jobb;i++)
				{
					if(job[i].time_out==storage[0])
					{	p=i;
						if((p != prev_j) && (ctr==1))
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
							prev_j=p; ctr=1;
						job[p].round++;
						printf("\ntemp_burst:%.2f",job[p].temp_burst);
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
	
}
