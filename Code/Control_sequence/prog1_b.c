//Program 1 using Conditional operator
#include<stdio.h>
void main()
{
	int i,j;
	printf("Enter values of i & j:");
	scanf("%d %d",&i,&j);

	(i==20||j==20)?(printf("Atleast one variable is equal to 20\n")):(printf("Both variables are not having 20\n"));

	(i<=40&&j<=40)?(printf("Both are less than or equal to 40\n")):(printf("Both are not less than or equal to 40\n"));
}
