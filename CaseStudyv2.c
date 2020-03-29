#include <stdio.h>
#include <conio.h>

struct Jobs_desc
{
	int Arrival;
	int Burst;
	int TurnAround;
	int Waiting;
} job[10];


int main()
{ int timeline=0,Time_start,jobb,i,Total_burst,temp_burst,gantt=0;
	queue list;
	create_queue(list);

	printf("How Many jobs? : ");
	scanf("%d",&jobb);
	
	for(i=0;i<jobb;i++)
	{	printf("Job#%d: ",i+1);
		printf("Arrival:");
		scanf("%d",&job[i].Arrival);
		printf("\tBurst:");
		scanf("%d",&job[i].Burst);
		Total_burst+=job[i].Burst;
		}	
	
		return 0;
}
	







