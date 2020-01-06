//Write a program to print all the prime numbers in the first N numbers.
#include<stdio.h>
void main()
{
	int n,i=2,j;

	printf("Enter value of N:");
	scanf("%d",&n);
	printf("List of prime numbers till %d : ",n);
	loop:
	while(i<=n)	//main loop
		{
			for(j=2;j<i;j++)		//for checking divisibilty
			{	
				if(i%j==0)
					{
					i++;		//if no is not prime it will increment i
					goto loop;	//and jump to while
					}
			}
		printf("%d ",i);
		i++;
		}
	printf("\n");
}
		
		
