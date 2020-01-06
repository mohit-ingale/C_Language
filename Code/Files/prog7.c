/*Read a positive integer value, and compute the following sequence: If the number is even, half it; if it's odd, multiply by 3 and add 1. Repeat this process until the value is 1, printing out each value. Finally print out how many of these operations you performed.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,count=0;
	printf("enter positive number : ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Error \n");
		exit(0);
	}
	printf("Initial Value is %d\n",n);
	while(n!=1)
	{
		if((n%2)==0)
			n=n/2;
		else
		{
			n=(n*3)+1;
		}
		count++;
		if(n==1)
			break;
		printf("Next Value is %d\n",n);
		
	}
	printf("Final Value is %d\nNumber of steps is %d\n",n,count);
}
