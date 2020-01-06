//Develop a C program to find factorial of a number N using for loop.
#include <stdio.h>
void main()
{
	int i,fact=1,n;
	printf("enter value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("\nfactorial of %d : %d\n",n,fact);
}
