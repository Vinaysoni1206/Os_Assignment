#include<stdio.h>
int i=0,n,c,d,bt[20],pr[20],bt1[20],bt2[20],bt3[20],time1=0,time2=0,time3=0,j=0,k=0,l=0,Total1=0,pr2[20],m,temp1[20],temp2[20],temp3[20],o,p,q,a,s=0,pr1[20];

void firstcomefirstserve(){
			if(time3!=0&&Total1!=0){
			for(i=0;i<l;i++){
				temp3[i]=bt3[i];
			 }
			printf("\n\n\n\n\t\tFCFS scheduling for Queue 3:\n");
			printf("________________________________________________________________________");
			printf("\n|\t   Process Number \t\tTime of Execution\t\t|\n");
			printf("________________________________________________________________________");
			m=0;
			C:
			for(i=0;i<l;i++){
					if(m<=10){
					if(temp3[i]>0&&temp3[i]<=10){
							m+=temp3[i];
							Total1-=temp3[i];
							time3-=temp3[i];
							printf("\n\t    P(%d) \t\t\t%d ",i+1,temp3[i]);
								}		
				
				}    
			}
		}
}
void rr(){
	if(time1!=0&&Total1!=0){
	if(s!=0){
		goto A;}
	p=10;
	for(i=0;i<k;i++){
		temp1[i]=bt1[i];
			 }
	A:
	q=0,a=0;
	printf("\n\n\n\n\t\tRound Robin scheduling with quantum time of 4 for Queue 1 :\n");
	printf("________________________________________________________________________");
	printf("\n|\t   Process Number\t\tPriority\t\tTime of Execution\t\t|\n");
	printf("________________________________________________________________________");
	for(i=0;i<k;++i){
			for(q=i+1;q<k;++q){
				if(pr1[i]>pr1[q]){
					a=pr1[i];
					pr1[i]=pr1[q];
					pr1[q]=a;
					
					a=temp1[i];
					temp1[i]=temp1[q];
					temp1[q]=a; 
							 }
					}
				} 		
			  B:
			  for(i=0;i<k;i++){
					if(temp1[i]>0&&temp1[i]<4&&p>0){
						if(p<temp1[i]&&p<4){
							time1-=p;
							temp1[i]-=p;
							Total1-=p;
							printf("\n\t    P(%d) \t\t\t%d \t\t\t%d",i+1,pr1[i],p);
							p-=p; 
							}
						else{
							time1-=temp1[i];
							Total1-=temp1[i];
							printf("\n\t    P(%d) \t\t\t%d \t\t\t%d",i+1,pr1[i],temp1[i]);
							p-=temp1[i];}
							}
							
					else{
						if(temp1[i]>0&&p>0&&p>temp1[i]){
							temp1[i]-=4;
							p-=4;
							time1-=4;
							Total1-=4;
							printf("\n\t    P(%d) \t\t\t%d \t\t\t4",i+1,pr1[i]);
							}
						else if(p<temp1[i]){
							temp1[i]-=p;
							time1-=p;
							Total1-=p;
							printf("\n\t    P(%d) \t\t\t%d \t\t\t%d",i+1,pr1[i],p);
							p-=p; 
							}			
			}		}
			if(p!=0&&time1!=0){goto B;}
		s++;
		}		
}

void prioritySA(){
		if(time2!=0&&Total1!=0){
		for(i=0;i<j;i++){
			temp2[i]=bt2[i];
			 }
		q=0,a=0;
		printf("\n\n\n\n\t\tPriority Scheduling Algorithm for Queue 2 \n");
		printf("________________________________________________________________________");
		printf("\n|\t   Process Number\t\tPriority\t\tTime of Execution\t\t|\n");
		printf("________________________________________________________________________");
		for(i=0;i<j;++i){
			for(q=i+1;q<j;++q){
				if(pr2[i]>pr[q]){
					a=pr2[i];
					pr2[i]=pr2[q];
					pr2[q]=a;
					
					a=temp2[i];
					temp2[i]=temp2[q];
					temp2[q]=a; 
							 }
					}
				} 
		m=0;
			D:
			for(i=0;i<j;i++){
					if(m<=10){
					if(temp2[i]>0&&temp2[i]<=10){
							m+=temp2[i];
							Total1-=temp2[i];
							time2-=temp2[i];
							printf("\n\t    P(%d) \t\t\t%d \t\t\t%d ",i+1,pr2[i],temp2[i]);
								}		
				
				}    
			}


		}
}

void mainroundrobin(){
		printf("\n**************************************************************************");
		printf("\n\t\tFor each Queue there is a quantum time of 10 \n");
		printf("\n**************************************************************************");
		rr();	
		prioritySA();
		firstcomefirstserve();
		//if(time1!=0&&time1>0){
		//	goto A;}
		//if(time2!=0&&time2>0){
		//	goto B;}
		//if(time3!=0&&time3>0){
		//	goto C;}
		
}

int main()
{
printf("Enter the number of processes :");
scanf("%d",&n);
for(i=0;i<n;i++)
        {
        printf("\n\t\tEnter details for P(%d) \n\n",i+1);
        printf("Enter the burst_time :");
	scanf("%d",&bt[i]);
        printf("Enter the priority in range 1 to 10 :");
        scanf("%d",&pr[i]);
	Total1+=bt[i];
        }
printf("\nThe Process in  queue 1 are\n");
for(i=0;i<n;i++){
	if(pr[i]>=1&&pr[i]<=3)
			{
			printf("\tP(%d)\n",i+1);
			bt1[k]=bt[i];
			pr1[i]=pr[i];
			k++;  
			time1+=bt[i];                       		
			}
}	
printf("\nThe Process in queue 2 are\n");
for(i=0;i<n;i++){
	if(pr[i]>=4&&pr[i]<=6)
			{
			printf("\tP(%d)\n",i+1);
			bt2[j]=bt[i];
			pr2[j]=pr[i];
			j++;
			time2+=bt[i];    
			}
}
printf("\nThe Process in queue 3 are\n");
for(i=0;i<n;i++){
	if(pr[i]>=7&&pr[i]<=10)
			{
			printf("\tP(%d)\n",i+1);
			bt3[l]=bt[i];
			l++;
			time3+=bt[i];    		
			}
	}
	mainroundrobin();

}

