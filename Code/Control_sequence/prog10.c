//Write a program to search for an element in a given list of elements. Use break statement.
#include <stdio.h>
void main()
{
	int a[10]={21,54,78,96,57,78,56,14,25,23},b,i;
	printf("enter no to find in array: ");
	scanf("%d",&b);
	for(i=0;i<10;i++)			
	{
		if(b==a[i])
		{
		printf("entered number is present at %d position\n",i+1);
		break;
		}
	}
}
	
