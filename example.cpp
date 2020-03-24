#include<stdio.h>
int roundrobinalgo(){}
int priorityalgo(){}
int fcfsalgo(){}
main()
{
int process[20],bursttime[20],priority[20],wait_time[20],turnaround[20],n,j,k,l;
int burst_time1[30],burst_time2[30],burst_time3[30];
int time_quantum1=10;
int time_quantum2=4;
float avg_wt,avg_tt;
printf("Enter the number of processes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter details of process[%d]\n",i+1);
	printf("Burst Time:");
	scanf("%d",&bursttime[i]);
	printf("Priority(1 to 15):");
	scanf("%d",&priority[i]);
}
for(i=0;i<n;i++)
{
	if(priority[i]>=1&&priority[i]<=5)
	{
        	printf("Process[%d] belongs to Queue 1\n",i+1);
		burst_time1[j]=bursttime[i];
		j++;
	}	
	else if(priority[i]>=6&&priority[i]<=10)
	{
		printf("Process[%d] belongs to Queue 2\n",i+1);
		burst_time2[k]=bursttime[i];
		k++;
	}	
	else if(priority[i]>=11&&priority[i]<=15)
	{
		printf("Process[%d] belongs to Queue 3\n",i+1);
		burst_time3[l]=bursttime[i];
		l++;
	}
}


}
