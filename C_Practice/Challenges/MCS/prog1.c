/*
Problem statement
Given a number, verify whether its prime or not

Input
First line of input will contain a number N = number of test cases. Next N lines will contain number n as test case where 0<=n<=1000000000

Output
For each input case, print "PRIME" if the number is prime, else print "NOT PRIME" (quotes for clarity)

Sample Input
4
0
1
2
3
Sample Output
NOT PRIME
NOT PRIME
PRIME
PRIME
*/


#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int data[100],i,j,n,flag=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
        scanf("%d",&data[j]);
   for(j=0;j<n;j++)
   {
   	if(data[j]<2)
   	{
   		printf("NOT PRIME\n");
   	}
   	else
   	{
   		for(i=2;i<=sqrt(data[j]);i++)
   		{
   			if(data[j]%i==0)
   			{
   				printf("NOT PRIME\n");
   				flag=1;
   				break;
   			}
   		}
   		if(flag)
   		{
   			flag=0;
   			continue;
   		}
   		printf("PRIME\n");
   		
   	}
   	
   }
    return 0;
}

