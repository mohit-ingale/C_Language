//Develop a C program to find sum of all odd numbers upto N using while loop.
#include <stdio.h>
void main()
{
	int n,sum=0,i=1;
	printf("enter value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
	sum+=i;
	i=i+2;
	}
	printf("sum of all odd numbers upto %d is %d\n",n,sum);
}
	
