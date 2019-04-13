#include<stdio.h>
#include<stdlib.h>
int students[3][5],ns=3,scheduler[1000],arrivedStudents[100],nap=0;
unsigned int time=0;

void getSystem()
{
		printf("\n Arrival Time of P(A) having PID:-%d-> ",2132);
		scanf("%d",&students[0][0]);
		printf("\n Burst Time of P(A) having PID:-%d-> ",2132);
		scanf("%d",&students[0][1]);
		printf("\n Arrival Time of P(B) having PID:-%d-> ",2102);
		scanf("%d",&students[1][0]);
		printf("\n Burst Time of P(B) having PID:-%d-> ",2102);
		scanf("%d",&students[1][1]);
		printf("\n Arrival Time of P(C) having PID:-%d-> ",2453);
		scanf("%d",&students[2][0]);
		printf("\n Burst Time of P(C) having PID:-%d-> ",2453);
		scanf("%d",&students[2][1]);
		for(int i=0;i<ns;i++)
		students[i][2]=students[i][1];
    	printf("\n ----------------------------");	

}

void printSystem()
{
	printf("\n\t\tOur System is :");
	printf("\nSi:  AT  BT RT");
	for(int i=0; i<ns; i++)
	{
		printf("\nS%d:  %d  %d  %d", i+1, students[i][0], students[i][1], students[i][2]);
	}
	printf("\n ---------------------------------");
} 

unsigned int remainingTime()
{
	for(int i=0;i<ns;i++)
	{
		if(students[i][2]>0)
		{
			return 1;
		}
	}
	return 0;
}

void addArivedStudents()
{
	for(int i=0;i<ns;i++)
	{
		if(students[i][0]==time)
		{
			arrivedStudents[nap]=i;
			nap++;
		}
	}
}

