#include <stdio.h>
#include <conio.h>
//ALGORITHMS
void FCFS(void);
void SJF(void);
void NPP(void);
void DEAD(void);
void PP(void);
//jobs
void JOB_VALUES(void)

//global variables
int arrival[50],priority[50],deadln[50];
int ctr=0,njob;
double job[50],burst[50];

int main()
{
	int algo_choose;
	
														maine:
	printf("\tChoose from below: \n \t1. First Come First Serve\n \t2. Shortest Job First\n \t3. Non-Preemptive Priority ");
	printf("\n\t4. Deadline Scheduling\n \t5. Preemptive Priority \n\n\t Response:");
	scanf("%d",&algo_choose):
		
	if (ctr>1)
	{
		printf("use the previous values? (y/n): ");
		scanf(" %c", &prev_val);
	}
	else 
		continue;
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
		printf("\n\t Job #%d",i);
			printf("\n\t\tArrival time:");
			scanf("%d",&arrival[i]);
			printf("\n\t\tBurst time: ");
			scanf("%e",burst[i]);	
	} 
	printf("\n \t\t\tok na."); getch();
	return 0;
}

void FCFS()
{
	int turn[50],wait[50];
	
	if (ctr==0)
	{
		JOB_VALUES();
		
	}
	else
		continue;
	
	
	printf("");
}




