//Write a Program to find if a given number is Armstrong number.
#include<stdio.h>
#include<math.h>
void main()
{
	int n,a=0,temp,temp2=0;

	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		temp2=temp%10;
		temp2=temp2*temp2*temp2;
		a+=temp2;
		temp/=10;
	}
	if(a==n)
		printf("Number is Armstrong\n");
	else
		printf("Number is not Armstrong\n");
}

		
