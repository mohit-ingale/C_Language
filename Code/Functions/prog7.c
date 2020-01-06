#include<stdio.h>
int fact(int a);
int nCr(int,int);
int nPr(int,int);
void main()
{
	int n,r;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter r:");
	scanf("%d",&r);
	printf("nCr=%d\n",nCr(n,r));
	printf("nPr=%d\n",nPr(n,r));
}

int fact(int a)
{
	int fac=a;
	if(a==1)
		return a;
	else
		fac=fac*fact(--a);
	return fac;
}

int nCr(int n,int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}

int nPr(int n,int r)
{
	return fact(n)/fact(n-r);
}
