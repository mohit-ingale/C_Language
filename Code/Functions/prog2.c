#include<stdio.h>

int fact(int);

void main()
{
	int n,fac;
	printf("Enter a number:");
	scanf("%d",&n);
	fac=fact(n);
	printf("Factorial: %d\n",fac);
}

int fact(int a)
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
