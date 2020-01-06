//Write a program to find whether given number is palindrome or not.
#include<stdio.h>
void main()
{
	int n,temp,p=0,c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		p=(temp%10);
		c=(c*10)+p;
		temp/=10;
	}
	if(c==n)
		printf("Number is Palindrome\n");
	else
		printf("Number is not Palindrome\n");
}
