/*Write a program that reads a number that says how many integer numbers are to be stored in an array, creates an array to fit the exact size of the data and then reads in that many numbers into the array.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,i,*ptr;
	printf("enter size of array: ");
	scanf("%d",&a);
	ptr=(int*)malloc(a*sizeof(int));			//Dynamic memory allocation
	printf("enter numbers in array: ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");
}
