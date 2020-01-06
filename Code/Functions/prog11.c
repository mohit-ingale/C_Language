#include<stdio.h>
int fibo(int);

void main()
{
	int n,i,ans;
	printf("enter length of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibo(i));
	}
	printf("\n");

}

int fibo(int i)
{
	if(i==0 || i==1)
		return 1;
	else
		return (fibo(i-1)+fibo(i-2));	
	
}
	
