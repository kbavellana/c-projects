#include <stdio.h>
#include <conio.h>
//ALGORITHMS
void FCFS(void);
void SJF(void);
void NPP(void);
void DEAD(void);
void PP(void);
//jobs
void JOB_VALUES(void);

//global variables
int job_arrival[50],priority[50],deadln[50],latest_arrival;
int ctr=0,njob;
float job_burst[50],t_brst;

int main()
{
	int algo_choose; 
	char prev_val;
	
														maine:
	printf("\tChoose from below: \n \t1. First Come First Serve\n \t2. Shortest Job First\n \t3. Non-Preemptive Priority ");
	printf("\n\t4. Deadline Scheduling\n \t5. Preemptive Priority \n\n\t Response:");
	scanf("%d",&algo_choose);
		
	if (ctr>1)
	{
		printf("use the previous values? (y/n): ");
		scanf(" %c", &prev_val);
	}
	switch(algo_choose)
	{
		case 1: printf("\n\t\tFirst Come First Serve"); FCFS(); break;
		case 2: printf("\n\t\tShortest Job First"); SJF(); break;
		case 3: printf("\n\t\tNon-Preemptive Priority"); NPP(); break;
		case 4: printf("\n\t\tDeadline Scheduling "); DEAD(); break;
		case 5: printf("\n\t\tPreemptive Priority"); PP(); break;
		default: printf("eww. No Algorithm detected. Choose another."); goto maine; break;
	}
	ctr++;
	
	
}

void JOB_VALUES()
{ int i;
	printf("How many Jobs? [limit:50]\n\tenter here :");
	scanf("%d",&njob);
	for(i=0; i<njob; i++)
	{
		printf("\n\t Job #%d",i+1);
			printf("\n\t\tArrival time:");
			scanf("%d",&job_arrival[i]);
			
			printf("arrival: %d",job_arrival[i]);
			
				if(job_arrival[i]>latest_arrival)
					latest_arrival=job_arrival[i]; printf("late arriv %d",latest_arrival);
				
			printf("\n\t\tBurst time: ");
			scanf("%f",&job_burst[i]); printf("burst:%.2f",job_burst[i]);
			t_brst+=job_burst[i];	
	} 
	printf("\n \t\t\tok na."); getch();
}

void FCFS()
{
	int turn[50],wait[50],i,j,arrive_loop;
	float temp_burst;
	

	if (ctr==0)
	{
		JOB_VALUES();
		
		for(arrive_loop=0; arrive_loop<=latest_arrival; arrive_loop++) //timeline to job it is
		{
			for(i=0;job_arrival[i]==arrive_loop;i++) // what job arrive at ^
			{
				turn[j]=job_burst[j]-job_arrival[j];
			
				printf("turnaround time: %d",turn[j]); getch();
			}
		}
	}

	printf(" ad "); getch();
}

void SJF()
{
}

void NPP()
{
}
	void DEAD()
{
}
	void PP()
{
}




