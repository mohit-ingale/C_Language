//Write a program to represent time of the day in hrs, mins and secs.
#include<stdio.h>
void main()
{
	struct time
	{
		int hrs,mins,secs;
	};
	struct time t;
	printf("Enter Hrs:");
	scanf("%d",&t.hrs);
	printf("Enter Mins:");
	scanf("%d",&t.mins);
	printf("Enter Secs:");
	scanf("%d",&t.secs);
	printf("Hrs=%d,Mins=%d,Secs=%d\n",t.hrs,t.mins,t.secs);
}
