/*Write a program to read a positive integer at least equal to 3, and print out all possible permutations of three positive integers less or equal to than this value.*/
#include<stdio.h>
int fact(int);
void main()
{
	int n,r,ans;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)				//Calculate nPr for all possible values of r
	{
		ans=fact(n)/(fact(n-r));		//Calculate n!/(n-r)!
		printf("%dP%d=%d\n",n,r,ans);
	}
}

int fact(int a)						//Function to calculate factorial
{
	int fac=a;
	
	if(a==1)
		return a;
	else if(a==0)
		return 1;
	else
		fac=fac*fact(--a);
	return fac;
}
